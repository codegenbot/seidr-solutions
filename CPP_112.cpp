#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char c_s : s) {
        bool found = false;
        for (char c_c : c) {
            if (c_s == c_c) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += c_s;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    vector<string> res;
    res.push_back(result);
    if (result == temp) {
        res.push_back("True");
    } else {
        res.push_back("False");
    }
    return res;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    // ...
}