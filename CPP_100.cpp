```cpp
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    int stones = n;
    std::vector<int> pile;
    for (int i = 0; i < n; i++) {
        if (stones % 2 == 1) {
            pile.push_back(stones);
            stones += 2;
        } else {
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}

int main() {
    if (make_a_pile(8) != std::vector<int>({8, 10, 12, 14, 16, 18, 20, 22})) {
        std::cerr << "Test failed.\n";
        return 1;
    }
    return 0;
}