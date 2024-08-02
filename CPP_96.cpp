#include <vector>

std::vector<int> count_up_to(int n) {
    std::vector<int> result(n);
    std::iota(result.begin(), result.end(), 1);
    return result;
}