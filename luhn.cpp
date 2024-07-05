```c++
#include <vector>
using namespace std;

int main() {
    vector<int> digits = {3, 4, 2, 7, 1, 3, 6, 9, 0, 1, 8, 5, 9, 4, 5, 9};
    cout << luhn(digits) << endl;
    return 0;
}

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}