```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a) {
    std::vector<std::string> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

void separate_paren_groups(std::vector<std::string> groups) {
    for (int i = 0; i < groups.size(); i++) {
        if (!issame(groups[i])) {
            std::cout << "(" << groups[i] << ") ";
        } else {
            std::cout << groups[i] << " ";
        }
    }
}

int main() {
    std::vector<std::string> groups = {"(a+b)", "(c+d)", "(e+f)"};
    separate_paren_groups(groups);
    return 0;
}
```