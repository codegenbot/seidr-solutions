#include <vector>
using namespace std;

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isSecond = false; 
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (isSecond) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isSecond = !isSecond; 
    }
    return sum;
}

int main() {
    vector<int> digits;
    cout << "Enter a credit card number: ";
    for(int i=0; i<16; i++) {
        int temp;
        cin >> temp;
        digits.push_back(temp);
    }
    cout << "The Luhn check result is: " << luhn(digits) << endl;
    return 0;
}