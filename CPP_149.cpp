```
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
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    vector<string> sorted_result;
    for(const auto& str : result) {
        bool found = false;
        for(auto it = sorted_result.begin(); it != sorted_result.end(); ++it) {
            if (*it == str) {
                found = true;
                break;
            }
        }
        if(!found) {
            sorted_result.push_back(str);
        }
    }
    return sorted_result;
}