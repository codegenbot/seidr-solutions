#include <vector>
using namespace std;

int luhn(vector<int>& cardNumber) {
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = cardNumber[i];
        if(i % 2 == 1) {
            digit *= 2;
            if(digit > 9) digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    vector<int> cardNumber;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cardNumber.push_back(num);
    }
    cout << luhn(cardNumber) << endl;
    return 0;
}