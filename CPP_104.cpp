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

int main() {
    unordered_set<int> a{1, 2, 3};
    unordered_set<int> b{4, 5, 6};
    assert(!issame(a, b));
    
    return 0;
}