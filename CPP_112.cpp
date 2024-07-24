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

bool reverse_delete(string s, string c) {
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
    return rev == s;
}

int main() {
    vector<string> a = {"Hello", "World"};
    vector<string> b = {"Hello", "World"};
    assert(issame(a, b));

    string str = "abcdefg";
    string charSet = "abc";
    cout << (reverse_delete(str, charSet) ? "True" : "False") << endl;

    return 0;
}