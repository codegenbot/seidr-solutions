#include <unordered_set>
#include <vector>
#include <iostream>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    std::unordered_set<int> seen;
    for (int num : l) {
        if (seen.find(-num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    std::vector<int> l = {-3, 9, -1, 4, 2, 31};
    std::cout << std::boolalpha << pairs_sum_to_zero(l) << std::endl;
    return 0;
}