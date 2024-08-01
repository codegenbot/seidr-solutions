#include <vector>
using namespace std;

int luhnCheck(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 1) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 1, 7, 3, 2, 8, 4, 5, 9, 1};
    int result = luhnCheck(digits);
    cout << "Result: " << result << endl;
    return 0;
}