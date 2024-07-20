#include <vector>
using namespace std;

int luhn(int n) {
    int sum = 0;
    bool isSecond = false;
    vector<int> digits;

    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
        if (!isSecond && digits.size() >= 2) {
            isSecond = true;
            int doubleDigit = digits.back() * 2;
            sum += doubleDigit / 10 + (doubleDigit % 10);
        } else {
            sum += digits.back();
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> ccNumber;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        ccNumber.push_back(x);
    }

    cout << luhn(0) << endl;

    return 0;
}