#include <vector>

int main() {
    int sum = 0;
    bool alternate = false;

    std::vector<int> digits = {4,2,8,6,2,1,1,7,1,8,0,2,9,5,5,3};
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }

    return sum;
}