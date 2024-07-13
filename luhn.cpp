```cpp
#include <vector>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool alternate = false; 
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = cardNumber[i] * (alternate ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        alternate = !alternate; 
    }
    return sum % 10;

}

int main() {
    std::vector<int> cardNumbers = {4,3,2,1,6,7,8,9,4,5};
    return luhn(cardNumbers);
}