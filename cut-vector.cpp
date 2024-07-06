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
    cout << "[" << join(" ", vector<string>(res[0].begin(), res[0].end())) << "] [" 
         << "[" << to_string(res[1].size()) << "] " << join(" ", vector<string>(res[1].begin(), res[1].end())) << "]" << endl;
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

string join(const string& sep, const vector<string>& parts) {
    ostringstream oss;
    for (const auto& part : parts) {
        oss << part << (parts.back() ? sep : "");
    }
    return oss.str();
}