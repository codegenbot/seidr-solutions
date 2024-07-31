#include <vector>
#include <iostream>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 0; ; i++) {
        if ((n & 1)) // check if n is odd
            pile.push_back(2 * i + 1);
        else
            pile.push_back(2 * i + 2);
        if (++n > i) continue;
        break;
    }
    return pile;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> pile = make_a_pile(n);
    for (int num : pile) {
        std::cout << num << " ";
    }
    return 0;
}