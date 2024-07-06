#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<vector<int>> res = cutVector(vec);
    cout << "[";
    bool first = true;
    for(int i = 0; i < res[0].size(); i++){
        for(int num:res[0][i]){
            if (!first) {
                cout << " ";
            }
            cout << to_string(num);
            first = false;
        }
        if(i < res[0].size() - 1)cout << "] [";
        else cout << "]";
    }
    return 0;
}

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || vec[i] - vec[i-1] >= 0) {
            res[0].assign(vec.begin(), vec.begin() + i + 1);
            res[1].assign(vec.begin() + i, vec.end());
            break;
        }
    }
    return res;
}