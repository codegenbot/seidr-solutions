#include <vector>
#include <iostream>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (stones % 2 == 1) {
            stones = stones + 1;
        } else {
            stones = stones + 2;
        }
    }
    return pile;
}

int main() {
    int n;
    std::cout << "Enter the number of stones: ";
    std::cin >> n;
    auto pile = make_a_pile(n);
    for (int stone : pile) {
        std::cout << stone << " ";
    }
    return 0;
}