#include <vector>

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