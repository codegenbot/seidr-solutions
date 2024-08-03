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

int main() {
    // Read input
    int n;
    std::cin >> n;

    // Generate piles of stones
    std::vector<int> pile_a = make_a_pile(n);
    std::vector<int> pile_b = make_a_pile(n);

    // Check if the piles are the same
    bool result = issame(pile_a, pile_b);

    // Output result
    std::cout << (result ? "Same" : "Different") << std::endl;

    return 0;
}