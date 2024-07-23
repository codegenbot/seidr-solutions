#include <vector>
using namespace std;

int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        if ((cardNumber[i] * 2) > 9) {
            sum += (cardNumber[i] * 2) - 9;
        } else {
            sum += cardNumber[i] * 2;
        }
        sum += cardNumber[i-1];
    }
    return sum;
}