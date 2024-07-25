#include <vector>

int luhn(std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
        if (doubleNext) {
            *it *= 2;
            if (*it > 9) {
                *it -= 9;
            }
        }
        sum += *it;
        doubleNext = !doubleNext;
    }

    return sum;
}