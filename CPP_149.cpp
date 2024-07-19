```cpp
#include <vector>
#include <algorithm>
#include <string>
#include <assert.h>

using namespace std;

bool issame(vector<vector<string>> a, vector<vector<string>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!issame(a[i], b[i])) {
            return false;
        }
    }
    return true;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;
    for (const auto& str : {lst}) {
        if (str.length() % 2 == 0) {
            vector<string> temp;
            temp.push_back(str);
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
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    vector<vector<string>> expected = {{"cc"}, {"dd"}, {"aaaa", "bbbb"}};
    assert(issame(sorted_list_sum(lst), expected));
    return 0;
}