```cpp
#include <algorithm>
#include <string>
#include <vector>
#include <cassert>

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

string reverse_delete(string s, string c) {
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
    string result = "";
    for(int i = temp.size() - 1; i >=0 ; i--) {
        result += temp[i];
    }
    return result;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}