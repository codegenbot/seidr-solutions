#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    bool alt = false;
    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i] * 10;
        if (alt) {
            digit += digit / 10;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alt = !alt;
    }
    return sum % 10 == 0;
}

int main() {
    vector<int> card; 
    for (int i = 15; i >= 0; --i) {
        int x;
        cout << "Enter the " << i << "th digit of your credit card number: ";
        cin >> x;
        card.push_back(x);
    }
    cout << luhn(card) ? "Valid" : "Invalid";
    return 0;
}