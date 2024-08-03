#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    for(int i = 0; i < n; ++i){
        stones.push_back(n + 2 * i);
    }
    return stones;
}

int main(){   
    int n;
    std::cin >> n;

    std::vector<int> pile = make_a_pile(n);
    std::vector<int> guess;
    
    for (int i = 0; i < n; ++i) {
        int stone;
        std::cin >> stone;
        guess.push_back(stone);
    }
    
    if (issame(pile, guess)) {
        std::cout << "Success" << std::endl;
    } else {
        std::cout << "Try again" << std::endl;
    }

    return 0; 
}