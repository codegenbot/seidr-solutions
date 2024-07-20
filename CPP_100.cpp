```cpp
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> pile = make_a_pile(n);
    if (issame(pile, {1, 3, 5})) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int current = 1;
    for (int i = 0; i < n; ++i) {
        if (n % 2 == 1) { // n is odd
            pile.push_back(current);
            current += 2;
        } else { // n is even
            pile.push_back(current);
            current += 1;
        }
    }
    return pile;
}