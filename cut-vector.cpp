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
            res[0].insert(res[0].end(), vec.begin(), vec.begin() + mid);
            res[1].insert(res[1].begin(), vec.begin() + mid, vec.end());
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