#include <vector>

std::vector<int> make_a_pile(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    for(int i = 0; i < n; ++i){
        stones.push_back(2*i + n);
    }
    return stones;
}