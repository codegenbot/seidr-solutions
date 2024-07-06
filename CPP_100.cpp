```cpp
#include <iostream>
#include <vector>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((n & 1)) { // check if n is odd using bitwise AND operator
            pile.push_back(stones);
            stones++;
        } else {
            pile.push_back(stones);
            stones += 2;
        }
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