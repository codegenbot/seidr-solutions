#include <vector>
#include <algorithm>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> unique_digits(std::vector<int> v) {
    vector<int> result;
    for (int num : v) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
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
    assert(same(unique_digits({135, 103, 31}), std::vector<int>({31, 135})));
    return 0;
}