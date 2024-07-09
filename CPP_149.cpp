#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

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

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        string s = lst[i];
        if (s.length() % 2 == 0) {
            result.push_back(s);
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
    return result;
}

int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    if (!issame(sorted_list_sum(lst), {"cc", "dd", "aaaa", "bbbb"})) {
        cout << "Test failed" << endl;
    } else {
        cout << "Test passed" << endl;
    }
    return 0;