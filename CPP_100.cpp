```
#include <vector>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    std::vector<int> pile = make_a_pile(n);
    
    if (issame({1, 3}, pile)) {
        std::cout << "The pile is same as {1, 3}" << std::endl;
    } else {
        std::cout << "The pile is different from {1, 3}" << std::endl;
    }
    
    return 0;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 0; ; i++) {
        if ((i + 1) % 2 == 0) {
            pile.push_back(i * 2 + 1);
        } else {
            pile.push_back(i * 2 + 3);
        }
        if (pile.back() > n) break;
    }
    return pile;
}