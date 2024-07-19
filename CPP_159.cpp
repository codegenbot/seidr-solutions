#include <vector> // Include the vector header

std::pair<int, int> solve(int number, int remaining, int need) {
    int total = number + std::min(need, remaining);
    int left = std::max(0, remaining - need);
    return {total, left};
}