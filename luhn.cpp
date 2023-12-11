```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> digits(16);
    int sum = 0;
    for (int i = 15; i >= 0; --i) {
        if (i % 2 == 0) {
            digits[i] *= 2;
            if (digits[i] > 9) {
                digits[i] -= 9;
            }
        }
        sum += digits[i];
    }
    cout << "The sum of the new digits is: " << sum << endl;
    return 0;
}
```