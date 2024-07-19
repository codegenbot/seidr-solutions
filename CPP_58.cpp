#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
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
    std::vector<int> user_input;
    user_input.resize(n);

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        user_input.push_back(x);
    }
    if (issame(user_input, user_input)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;