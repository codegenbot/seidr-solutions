#include <vector>
using namespace std;

int luhnCheck(vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (auto digit : digits) {
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
    int n;
    cin >> n;
    vector<int> digits(n);
    for (auto& digit : digits) {
        cin >> digit;
    }
    cout << luhnCheck(digits) << endl;
    return 0;
}