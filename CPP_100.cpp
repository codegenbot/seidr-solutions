```cpp
#include <vector>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    auto pile = make_a_pile(n);

    if (!issame({1,3,5}, pile)) {
        for (int x : pile) {
            std::cout << x << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Pile is same as {1,3,5}\n";
    }

    return 0;
}