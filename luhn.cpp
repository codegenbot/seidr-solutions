#include <vector>
using namespace std;

int main() {
    int sum = 0;
    bool alternate = false;
    vector<int> cardNumber = {4,3,2,1,2,1,3,4,2,8};
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }
    return sum;
}