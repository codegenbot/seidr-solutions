```c++
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
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

int main() {
    int n;
    std::cin >> n;
    std::vector<int> common = {4, 3, 2, 8};
    std::vector<int> user_input;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        user_input.push_back(x);
    }
    if (issame(common, user_input)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}