#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    // Function implementation
}

// Include function definition to avoid undefined reference error
std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    for(int i = 0; i < n; i++){
        stones.push_back(n + 2*i);
    }
    return stones;
}