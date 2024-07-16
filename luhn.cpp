#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for (auto i = digits.size() - 1; i >= 0; --i) {
        if ((digits.size() - 1 - i) % 2 == 0) { 
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    vector<int> cardNumber = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 3, 1, 6, 4, 3, 5};
    int result = luhn(cardNumber);
    return 0;
}