#include <vector>
#include <algorithm>
#include <cassert>
#include <unordered_set>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> unique_digits(std::vector<int> values) {
    std::unordered_set<int> uniqueSet;
    for (int num : values) {
        while (num > 0) {
            uniqueSet.insert(num % 10);
            num /= 10;
        }
    }
    
    return std::vector<int>(uniqueSet.begin(), uniqueSet.end());
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {1, 3, 5}));
    return 0;
}