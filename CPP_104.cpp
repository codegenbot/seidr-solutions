#include <vector>
#include <unordered_set>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::unordered_set<int> digits;
    for (int digit : a) {
        if (digits.count(digit)) {
            return true;
        }
        digits.insert(digit);
    }
    for (int digit : b) {
        if (digits.count(digit)) {
            return true;
        }
        digits.insert(digit);
    }
    return false;
}