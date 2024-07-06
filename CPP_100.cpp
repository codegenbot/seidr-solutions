#include <iostream>
#include <vector>

bool issame(int a, int b) {
    return (a == 1 && b == 1);
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    if(n % 2 == 0)
        pile.push_back(1);
    else
        pile.push_back(n);

    for (int i = 1; i < n; i++) {
        pile.push_back(i % 2 + 1);
    }
    return pile;
}

int main() {
    int n;
    std::cout << "Enter the number of piles: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
    } else {
        std::vector<int> pile = make_a_pile(n);
        
        for(int i=0; i < pile.size(); i++) {
            std::cout << pile[i] << " ";
        }
        std::cout << std::endl;

        if (issame(n, 1)) {
            std::cout << "The piles are same." << std::endl;
        } else {
            for(int i=0; i < n; i++) {
                if(pile[i] != pile[0]) {
                    std::cout << "The piles are not the same." << std::endl;
                    return 0;
                }
            }
            std::cout << "The piles are the same." << std::endl;
        }
    }

    return 0;
}