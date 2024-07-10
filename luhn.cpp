#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9) {
                doubledDigit -= 9;
            }
            sum += doubledDigit;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    // example inputs
    std::vector<int> input1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3};
    std::vector<int> input2 = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    std::vector<int> input3 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::vector<int> input4 = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    std::vector<int> input5 = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

    // calculate the Luhn sum
    int output1 = luhn(input1);
    int output2 = luhn(input2);
    int output3 = luhn(input3);
    int output4 = luhn(input4);
    int output5 = luhn(input5);

    // print the outputs
    std::cout << output1 << "\n";
    std::cout << output2 << "\n";
    std::cout << output3 << "\n";
    std::cout << output4 << "\n";
    std::cout << output5 << "\n";

    return 0;
}