#include <vector>
#include <initializer_list>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (n % 2 == 1) {
            n++;
            stones = n;
        } else {
            n += 3;
            stones = n;
        }
    }
    return pile;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    auto pile = make_a_pile(n);

    for (int stone : pile) {
        std::cout << stone << " ";
    }
    std::cout << std::endl;

    return 0;
}