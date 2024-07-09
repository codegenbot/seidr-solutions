#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    reverse(result.begin(), result.end());
    vector<string> res;
    res.push_back(result);
    res.push_back(to_string(result == reverse(result)));
    return res;
}

int main() {
    assert(issame({ "", "True" }, reverse_delete("mamma", "mia")) );
    // ...
}