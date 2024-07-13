#include <vector>
using namespace std;

int luhn(const vector<int>& cc) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = cc.size() - 1; i >= 0; --i) {
        if (doubleNext) {
            int digit = cc[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
            doubleNext = false;
        } else {
            sum += cc[i];
            doubleNext = !doubleNext;
        }
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cc(n);
    for (int i = 0; i < n; ++i) {
        cin >> cc[i];
    }
    cout << luhn(cc) << endl;
    return 0;
}