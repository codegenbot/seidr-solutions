#include <vector>
using namespace std;

int luhnCheck(const vector<int>& cardNumber) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum;
}

int main() {
    vector<int> cardNumber = {4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 3, 4, 0};
    cout << luhnCheck(cardNumber) << endl;
    return 0;
}