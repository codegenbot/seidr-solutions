#include <vector>
#include <cassert> // Add this header

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert(issame(eat(4, 5, 1), std::vector<int>{5, 0})); // Specify vector<int> for the expected result
    return 0;
}