#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) { // double every other digit starting with the second digit
            int temp = digits[i] * 2;
            if (temp > 9) { // if any of the results are over 9, subtract 9 from them
                temp -= 9;
            }
        } else {
            temp = digits[i];
        }
        sum += temp; // return the sum of all of the new digits
    }
    return sum;
}