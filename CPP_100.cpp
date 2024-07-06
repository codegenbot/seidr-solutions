#include <initializer_list>
#include <vector>
#include <iostream>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pile.push_back(i * 2 - 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    return pile;
}

int main() {
    int input;
    std::cout << "Enter the value of n: ";
    std::cin >> input;
    std::vector<int> result = make_a_pile(input);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}