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
    std::vector<int> input = {1, 2, 3, 4, 5}; 
    int result = luhn(input);
    return 0;
}