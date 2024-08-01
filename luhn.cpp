#include <vector>
using namespace std;

int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i] * ((cardNumber.size() - i) % 2 == 1 ? 2 : 1);
        if (digit > 9)
            sum += (digit % 10) + 9;
        else
            sum += digit;
    }
    return sum;
}