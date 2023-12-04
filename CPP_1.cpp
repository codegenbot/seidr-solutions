```
#include <string>
#include <vector>
using namespace std;

bool issame(const string& s1, const string& s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }

    return true;
}

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> result;
    int open = 0, close = 0;
    string temp = "";

    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            open++;
        } else if (paren_string[i] == ')') {
            close++;
        }

        if (open == close && open > 0) {
            result.push_back(temp);
            temp = "";
            open = 0;
            close = 0;
        } else {
            temp += paren_string[i];
        }
    }

    return result;
}

int main() {
    string paren_string = "(((a + b) * (c - d)) + ((e + f) * (g - h)))";
    vector<string> groups = separate_paren_groups(paren_string);

    for (int i = 0; i < groups.size(); i++) {
        cout << "Group " << i << ": " << groups[i] << endl;
    }

    return 0;
}
```