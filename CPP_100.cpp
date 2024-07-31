#include <vector>

bool issame(std::vector<int> vec1, std::vector<int> vec2){
    return (vec1 == vec2);
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}