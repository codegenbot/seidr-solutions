```cpp
#include <vector>
using namespace std;

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

int main() {
    vector<int> testDigits(12);
    for(int i = 0; i < 12; i++) {
        testDigits[i] = {4,3,2,1,8,7,6,5,4,3,2,1}[i];
    }
    int result = luhn(testDigits);
    cout << "Result: " << result << endl;
    return 0;
}