#include <vector>
using namespace std;

int luhnCheck(const vector<int>& cc) {
    int sum = 0;
    for (int i = 0; i < cc.size(); i++) {
        if (i % 2 == 1) {
            int temp = cc[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += cc[i];
        }
    }
    return sum;
}

int main() {
    vector<int> cc;
    cout << "Enter your credit card number: ";
    for (int i = 0; i < 16; i++) {
        int digit;
        cin >> digit;
        cc.push_back(digit);
    }
    int result = luhnCheck(cc);
    cout << "The Luhn check value is: " << result << endl;
    return 0;
}