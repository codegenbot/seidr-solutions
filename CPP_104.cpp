#include <vector>
#include <set>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> unique_digits(const std::vector<int>& x){
    std::set<int> uniqueSet;
    for (int num : x) {
        while (num > 0) {
            uniqueSet.insert(num % 10);
            num /= 10;
        }
    }
    return std::vector<int>(uniqueSet.begin(), uniqueSet.end());
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}