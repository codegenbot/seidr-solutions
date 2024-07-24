int main() {
    using namespace std;

    int sum = 0;
    bool alternate = false;
    vector<int> cardNumber;
    
    cout << "Enter your credit card number (16 digits): ";
    for(int i = 0; i < 16; i++) {
        int digit;
        cin >> digit;
        cardNumber.push_back(digit);
    }
    
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
    
    cout << "The Luhn check result: " << sum << endl;
    return 0;
}