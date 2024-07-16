#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = digits[i] * 2;
            if (temp > 9)
                sum += temp / 10 + temp % 10;
            else
                sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;

}

int main() {
    std::vector<int> digits = {3,7,1,6,0,1,6,5,9,4,5,2};
    int result = luhn(digits);
    return 0;
}