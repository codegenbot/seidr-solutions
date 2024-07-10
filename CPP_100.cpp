#include <iostream>
#include <vector>

int make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 0; i < n; i++) {
        pile.push_back(i);
    }
    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;

}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    std::vector<int> pile = make_a_pile(n);
    if (issame(pile, make_a_pile(n))) {
        std::cout << "The piles are the same." << std::endl;
    } else {
        std::cout << "The piles are not the same." << std::endl;
    }
    
    return 0;
}