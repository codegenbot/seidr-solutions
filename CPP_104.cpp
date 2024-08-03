#include <unordered_set>

bool issame(unordered_set<int> a, unordered_set<int> b) {
    unordered_set<int> digits;
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