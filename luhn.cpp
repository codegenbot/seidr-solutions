#include <vector>
using namespace std;

int luhn(vector<int> numbers) {
    int sum = 0;
    bool doubleDigit = false;
    for (int i = numbers.size() - 1; i >= 0; i--) {
        int digit = numbers[i];
        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleDigit = !doubleDigit;
    }
    return sum;
}