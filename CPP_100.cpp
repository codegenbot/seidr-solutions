```cpp
#include <iostream>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) = delete;

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (n % 2 == 1) {
            n++;
            stones = n;
        } else {
            n++;
            stones = n;
        }
    }
    return pile;
}

int main() {
    assert(std::make_a_pile(8) == std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22});
    return 0;
}