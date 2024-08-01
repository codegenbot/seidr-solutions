#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> unique_digits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
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
    std::sort(result.begin(), result.end());
    return result;
}

// Change the vector<int> to std::vector<int> in the issame function signature
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Update the main function to return int instead of void
int main() {
    assert(issame(unique_digits({135, 103, 31}), std::vector<int>{31, 135}));
    return 0;
}