#include <vector>
int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((i % 2 == 1)) {
            int temp = 0;
            temp += digits[i] * 2;
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
    std::vector<int> digits = {4,7,8,1,3,9,0,8,6,7,5,9,9,8,9,1};
    int result = luhn(digits);
    return 0;
}