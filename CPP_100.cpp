#include <iostream>
#include <vector>

bool vectorEquals(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1; 
    while (stones <= n) {
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
    assert(std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22} == make_a_pile(8));
    return 0;
}