#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool alternate = false;
    
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
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
    vector<int> digits1 = {3,4,5,8,6,7,1,2};
    cout << "Test case 1: " << luhn(digits1) << endl;
    
    vector<int> digits2 = {4, 3, 9, 4, 7, 8, 6, 4};
    cout << "Test case 2: " << luhn(digits2) << endl;
    
    vector<int> digits3 = {1, 5, 5, 9, 9, 8, 5, 6, 5};
    cout << "Test case 3: " << luhn(digits3) << endl;
    
    return 0;
}