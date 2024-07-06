```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<vector<int>> res = cutVector(vec);
    cout << "[" << join(res[0], " ") << "] [" << '[' << to_string(res[1].size()) << '] ' << join(res[1], " ") << "]"
         << endl;
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

string join(const vector<int>& v, const string& sep) {
    string result = "";
    for (int i : v) {
        result += to_string(i) + sep;
    }
    if (!result.empty()) {
        result.pop_back();  // Remove the last separator
    }
    return result;
}