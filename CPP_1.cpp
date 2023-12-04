```
#include <vector>
#include <string>

std::vector<std::string> separate_paren_groups(const std::string& paren_string) {
    std::vector<std::string> result;
    int open = 0, close = 0;
    std::string temp = "";

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

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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
```