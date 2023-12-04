```
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input = "((a+b)*(c-d))";
    vector<string> groups = separate_paren_groups(input);
    for (auto group : groups) {
        cout << group << endl;
    }
    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
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
```

The issue with the original code is that the function `separate_paren_groups` is not declared before it's used in `main`. To fix this, we need to declare or define the function before using it. In this case, I declared the function before `main` and defined it after `main`.