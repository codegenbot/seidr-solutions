```cpp
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
    string str = "";
    bool first = true;
    for (int i = 0; i < res.size(); i++) {
        if (!first) cout << ", ";
        else first = false;
        cout << "[";
        auto next = res[i].begin();
        for(int j = 0; j < res[i].size()-1;j++){
            str = "";
            while(next != res[i].end()){
                str += to_string(*next) + (next == --res[i].end() ? "" : ", ");
                next++;
            }
            cout << str;
            if(j+1<res[i].size()-1)cout<<",";
            cout<<"] ";
        }
        if(i < res.size() - 1) cout << "], [";
        else cout << str + "]";
    }
    cout << "]";
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