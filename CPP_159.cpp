#include <vector>
#include <cassert>
#include <utility>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return std::make_pair(eaten, left);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));
    return true;
}

int main() {
    // Add test cases or logic here
    return 0;
}