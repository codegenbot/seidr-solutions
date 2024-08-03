#include <vector>
using namespace std;

bool issame(const std::vector<int>& s1, const std::vector<int>& s2) {
    return s1 == s2;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    while(n > 0){
        stones.push_back(n);
        n = (n % 2 == 0) ? n + 1 : n + 2;
    }
    return stones;
}