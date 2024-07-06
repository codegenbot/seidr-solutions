#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((n % 2) == 1) { // n is odd
            pile.push_back(stones);
            stones += 2;
        } else { // n is even
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    std::vector<int> pile = make_a_pile(n);

    if (issame(pile, {1,3,5,7})) {
        std::cout << "Pile is same as expected." << std::endl;
    } else {
        std::cout << "Pile is different from expected." << std::endl;
    }

    return 0;
}