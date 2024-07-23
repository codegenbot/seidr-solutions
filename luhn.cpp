#include <vector>
int luhn(std::vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((i % 2 == 1)) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }
    }
    return sum;
}
int main() {
    std::vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 9, 3, 4};
    int result = luhn(digits);
    return 0;
}