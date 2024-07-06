```
#include <vector>
#include <iostream>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> pile = make_a_pile(n);
    
    for (const auto& num : pile) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pile[i] = i * 2 + 1;
        } else {
            pile[i] = i * 2;
        }
    }
    return pile;
}