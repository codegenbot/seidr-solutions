```cpp
#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    return sum;
}

int main() {
    vector<int> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; 
    int result = luhn(digits);
    cout << "Luhn's algorithm verification: " << (result == 0 ? "Valid" : "Invalid") << endl;
    return 0;
}