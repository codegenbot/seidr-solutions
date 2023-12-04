```
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    int level = 0;
    string curr_group = "";
    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            level++;
        } else if (paren_string[i] == ')') {
            level--;
        }
        if (level == 0 && !curr_group.empty()) {
            groups.push_back(curr_group);
            curr_group = "";
        } else {
            curr_group += paren_string[i];
        }
    }
    return groups;
}

int main() {
    string test = "( ) (( )) (( )( ))";
    vector<string> groups = separate_paren_groups(test);
    for (auto group : groups) {
        cout << group << endl;
    }
    return 0;
}
```