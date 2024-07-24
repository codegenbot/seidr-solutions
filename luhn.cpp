#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i : digits) {
        if (doubleNext) {
            i *= 2;
            if (i > 9) {
                i -= 9;
            }
        }
        sum += i;
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
    cout << luhn(digits) << endl;
    return 0;
}