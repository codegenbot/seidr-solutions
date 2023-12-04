```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(const string& s1, const string& s2) {
    return s1 == s2;
}

int main() {
    vector<string> separate_paren_groups;
    string paren_string = "((a+b)*c)";

    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            int count = 1;
            while (count > 0) {
                i++;
                if (paren_string[i] == '(') {
                    count++;
                } else if (paren_string[i] == ')') {
                    count--;
                }
            }
        }
        separate_paren_groups.push_back(paren_string.substr(0, i));
    }

    for (int i = 0; i < separate_paren_groups.size(); i++) {
        if (issame(separate_paren_groups[i], "a+b")) {
            cout << "Match found: " << separate_paren_groups[i] << endl;
        }
    }

    return 0;
}
```