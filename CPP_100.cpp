#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int num = n;
    while (num > 0) {
        if (n % 2 == 1) {
            pile.push_back(2 * num + 1);
        } else {
            pile.push_back(2 * num);
        }
        n /= 2;
        num /= 2;
    }
    return pile;
}