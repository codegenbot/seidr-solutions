#include <vector>
using namespace std;

int luhn(const vector<int>& cardNum) {
    int sum = 0;
    bool isDouble = false;
    
    for (int i = cardNum.size() - 1; i >= 0; --i) {
        int digit = cardNum[i];
        
        if (isDouble) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        isDouble = !isDouble;
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNum(n);
    for(int i=0; i<n; ++i) {
        cin >> cardNum[i];
    }
    cout << luhn(cardNum) << endl;
    return 0;
}