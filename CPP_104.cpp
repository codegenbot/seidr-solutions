#include <cassert>
#include <vector>
#include <algorithm>
#include <unordered_set>

bool issame(int a, int b) {
    return a < b;
}

std::vector<int> unique_digits(const std::vector<int>& nums) {
    std::vector<int> result;
    std::unordered_set<int> uniqueDigits;

    for (int num : nums) {
        while (num > 0) {
            uniqueDigits.insert(num % 10);
            num /= 10;
        }
    }

    result.assign(uniqueDigits.begin(), uniqueDigits.end());
    std::sort(result.begin(), result.end(), issame);

    return result;
}

int main() {
    assert(unique_digits({135, 103, 31}) == std::vector<int>({1, 3, 5}));
    return 0;
}