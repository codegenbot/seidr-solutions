#include <vector>
int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = digits[i] * 2;
            if (temp > 9)
                sum += temp - 9;
            else
                sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> input = {4, 7, 8, 2, 0, 0, 8, 6, 7, 1, 1, 4, 3, 5, 5, 9};
    int result = luhn(input);
    return 0;
}