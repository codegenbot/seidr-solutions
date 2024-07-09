#include <vector>

int luhn(std::vector<int> ccNum) {
    long long sum = 0;
    for (int i = 0; i < 16; i++) {
        int digit = ccNum[i];
        if ((i % 2 == 1)) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    return static_cast<int>(sum);
}

int main() {
    std::vector<int> ccNum;
    ccNum.resize(16); 
    std::cout << "Enter a credit card number: ";
    for (int i = 0; i < 16; ++i) {
        int num;
        std::cin >> num;
        ccNum[i] = num;
    }
    int result = luhn(ccNum);
    std::cout << "The Luhn check value is: " << result << std::endl;
    return 0;
}