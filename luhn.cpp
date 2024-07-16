#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int temp = (i % 2 == 0) ? digits[i] : digits[i] * 2;
        if (temp > 9)
            sum += temp - 9;
        else
            sum += temp;
    }
    return sum;

}

int main() {
    std::vector<int> digits = {1, 2, 3, 4}; // replace with your input
    int result = luhn(digits);
    std::cout << "Result: " << result << std::endl; // print the result

    return 0;
}