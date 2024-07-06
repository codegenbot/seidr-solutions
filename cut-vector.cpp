```cpp
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || vec[i] != vec[i - 1]) {
            int mid = i;
            while(mid > 0 && vec[mid] == vec[mid - 1])
                mid--;
            res[0].reserve(i);
            for(int j=0; j<i; j++) {
                res[0].push_back(vec[j]);
            }
            res[1].reserve(n-i);
            for(int j=i; j<n; j++) {
                res[1].push_back(vec[j]);
            }
            break;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<vector<int>> res = cutVector(vec);
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i] << " ";
    }
    cout << "] [" << "[";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i] << " ";
    }
    cout << "]";
    return 0;
}