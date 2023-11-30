#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    int level = n;
    for(int i=0; i<n; i++){
        stones.push_back(level);
        level += (n % 2 == 0) ? 2 : 1;
    }
    return stones;
}