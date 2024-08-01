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
    vector<int> digits = {3,4,5,1,8,6,7,1,6,9,3,3,8,0,5};
    cout << luhnCheck(digits) << endl; // print the result
    return 0;
}