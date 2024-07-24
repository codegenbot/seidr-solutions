#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for(int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if(doubleNext) {
            digit *= 2;
            if(digit > 9)
                digit -= 9;
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    return sum;
}

int main() {
    // Read input from user
    int n;
    cin >> n;
    vector<int> digits(n);
    for(int i = 0; i < n; ++i) {
        cin >> digits[i];
    }
    
    cout << luhn(digits) << endl;
    
    return 0;
}