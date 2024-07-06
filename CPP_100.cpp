#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    if (issame(make_a_pile(n), make_a_pile(n))) {
        std::cout << "The piles are same." << std::endl;
    } else {
        std::cout << "The piles are not same." << std::endl;
    }

    return 0;
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