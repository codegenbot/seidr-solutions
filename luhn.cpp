```cpp
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
    vector<int> card = {4,7,8,3,1,6,0,1,9,9,8,5,6,0,2,0};
    cout << luhn(card) << endl; 
    return 0;
}