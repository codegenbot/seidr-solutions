#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    bool alt = false;
    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];
        if (alt) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alt = !alt;
    }
    return sum;
}

int main() {
    vector<int> card;
    int n;
    cout << "Enter the length of the credit card number: ";
    cin >> n;
    card.resize(n);
    
    for (int i = 0; i < n; ++i) {
        cout << "Enter digit " << i+1 << ": ";
        cin >> card[i];
    }
    
    cout << "The Luhn check is: " << luhn(card);
    
    return 0;
}