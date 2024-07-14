#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool alternate = true;
    
    for (int i : digits) {
        if (alternate) {
            i *= 2;
            if (i > 9) {
                i -= 9;
            }
        }
        sum += i;
        alternate = !alternate;
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for(int i=0; i<n; i++) {
        cin >> digits[i];
    }
    cout << luhn(digits) << endl;
    return 0;
}