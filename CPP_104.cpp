#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> unique_digits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        int temp = num;
        bool hasEvenDigit = false;
        while (temp > 0) {
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}