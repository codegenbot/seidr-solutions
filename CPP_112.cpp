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
    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b = {"banana", "cherry", "apple"};
    assert(issame(a, b));
    
    string s = "abcde";
    string c = "cd";
    cout << (reverse_delete(s, c) ? "True" : "False") << endl;
    
    return 0;
}