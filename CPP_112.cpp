```
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> v2) {
    if (a.size() != v2.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != v2[i]) return false;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string revTemp = temp;
    reverse(revTemp.begin(), revTemp.end());
    if (temp == revTemp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

int main() {
    vector<string> output = reverse_delete("mamma", "mia");
    assert(issame({output}, {{"", "True"}}));
    return 0;
}