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
    int num;
    cout << "Enter the credit card number: ";
    while (cin >> num) {
        cc.push_back(num);
    }
    int result = luhnCheck(cc);
    cout << "The Luhn check value is: " << result << endl; // display the result
    return 0;
}