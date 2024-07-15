#include <vector>
#include <cassert> // Added for assert

std::vector<int> solve(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert(issame(solve(4, 5, 1), {5, 0})); // Corrected function name from eat to solve
    return 0;
}