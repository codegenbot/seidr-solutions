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
    vector<int> cardNumber = {3, 4, 5, 1, 3, 5, 4, 9, 6, 7, 8, 2, 0, 0, 8, 6};
    cout << luhnCheck(cardNumber) << endl;
    return 0;
}