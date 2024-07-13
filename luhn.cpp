#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = 0; i < digits.size(); i++) {
        if (doubleNext) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += (doubled % 10) + 1;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }

        doubleNext = !doubleNext;
    }

    return sum;
}