```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n;
    cin >> n;
    vector<string> lst;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        lst.push_back(temp);
    }
    vector<string> result = sorted_list_sum(lst);
    return 0;
}

vector<string> sorted_list_sum(vector<string> lst) {
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
    for (const auto& str : result) {
        result.push_back(str[0]);
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}