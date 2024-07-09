#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
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
            n++;
            stones = n * 2;
        }
    }
    return pile;
}

int main() {
    int n;
    std::cout << "Enter the number of stones: ";
    std::cin >> n;

    std::vector<int> pile = make_a_pile(n);
    
    for (auto i : pile) {
        std::cout << i << " ";
    }
    
    return 0;
}