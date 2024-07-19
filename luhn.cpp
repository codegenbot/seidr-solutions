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
    cout << "Test Case 1: " << luhn(digits1) << endl;

    vector<int> digits2 = {9,7,8,0,0,8,6,4,6,7,5,3,9,1,4};
    cout << "Test Case 2: " << luhn(digits2) << endl;

    return 0;
}