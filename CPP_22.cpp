```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(std::to_string(a[i]) + std::to_string(b[i])).compare("")) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::vector<int> a, b;
        char ch;
        while ((ch = getchar()) != '\n') {
            if (ch == ' ') {
                break;
            }
            int x = ch - '0';
            a.push_back(x);
        }
        while ((ch = getchar()) != '\n') {
            if (ch == ' ') {
                break;
            }
            int x = ch - '0';
            b.push_back(x);
        }

        if (!issame(a, b)) {
            std::cout << "Not equal" << std::endl;
        } else {
            std::cout << "Equal" << std::endl;
        }
    }
}