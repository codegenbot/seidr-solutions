#include <vector>
using namespace std;

int luhn(vector<int> cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.size(); i++) {
        if ((i % 2 == 1) || (cardNumber[i] > 4)) {
            int temp = cardNumber[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += cardNumber[i];
        }
    }
    return sum;
}