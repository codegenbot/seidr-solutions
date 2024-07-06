#include <iostream>
#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int level = 1;
    for (int i = 1; ; i++) {
        if ((n % 2 == 0 && i % 2 == 0) || (n % 2 != 0 && i % 2 != 0)) {
            pile.push_back(i);
            n--;
            level++;
        }
        if (n == 0) break;
    }
    return pile;
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> pile = make_a_pile(n);
    
    // Your code to compare and check the equality
    if (issame({1, 3}, pile)) {
        std::cout << "Piles are same.\n";
    } else {
        std::cout << "Piles are different.\n";
    }
    
    return 0;
}