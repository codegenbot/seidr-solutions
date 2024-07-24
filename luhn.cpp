#include <vector>
using namespace std;

int luhn(vector<int> &num) {
    int sum = 0;
    bool alt = false;
    for (int i = num.size() - 1; i >= 0; --i) {
        int digit = num[i];
        if (alt) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alt = !alt;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    cout << luhn(num) << endl;
    return 0;
}