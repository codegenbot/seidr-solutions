```c++
#include <vector>
using namespace std;

int luhn(const vector<int>& card) {
    int sum = 0;
    bool alternate = false;
    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];
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

int main() {
    vector<int> card = {4,3,2,8,7,9,6,0,5,5,4,9,3,5};
    cout << luhn(card) << endl;
    return 0;
}