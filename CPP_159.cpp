#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::pair<int, int> eat(int number, int need, int remaining) {
        int total = number + need;
        int eaten = total > remaining ? remaining : total;
        int left = remaining - eaten;
        return std::make_pair(eaten, left);
    }

    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));