```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool reverse_delete(const string& s, const string& c) {
    string temp = "";
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    string rev = temp;
    reverse(rev.begin(), rev.end());
    return temp == rev;
}

int main() {
    vector<string> a = {"abc", "def", "ghi"};
    vector<string> b = {"abc", "def", "jkl"};
    assert(issame(a, b) == false);

    string s = "hello";
    string c = "hl";
    cout << (reverse_delete(s, c) ? "True" : "False") << endl;

    return 0;
}