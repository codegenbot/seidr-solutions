#include <vector>
#include <initializer_list>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    int n1, n2;
    std::cout << "Enter the value of n1: ";
    std::cin >> n1;

    auto pile1 = make_a_pile(n1);

    std::cout << "Enter the value of n2: ";
    std::cin >> n2;

    auto pile2 = make_a_pile(n2);

    assert(issame(pile1, pile2));

    for (int stone : pile1) {
        std::cout << stone << " ";
    }
    std::cout << std::endl;
    for (int stone : pile2) {
        std::cout << stone << " ";
    }
    std::cout << std::endl;

    return 0;
}