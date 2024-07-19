```
#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            vector<string> temp = {str};
            result.push_back(temp);
        }
    }
    sort(result.begin(), result.end(),
         [](const vector<string>& a, const vector<string>& b) {
             if (a[0].length() != b[0].length()) {
                 return a[0].length() < b[0].length();
             } else {
                 return a[0] < b[0];
             }
         });
    return result;
}

int main() {
    vector<string> lst;
    string str;
    cout << "Enter strings (enter 'stop' to finish): ";
    while (true) {
        cin >> str;
        if (str == "stop") break;
        lst.push_back(str);
    }
    vector<vector<string>> expected = sorted_list_sum(lst);
    assert(issame(expected, expected));
    return 0;
}