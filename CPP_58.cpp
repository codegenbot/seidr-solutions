```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(vector<int> a, vector<int> b) {
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

int main_test() {
    int n;
    std::cin >> n;
    std::vector<int> user_input(n); 
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        user_input[i] = x; 
    }
    if (isSame(user_input, user_input)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}