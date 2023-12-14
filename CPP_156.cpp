```
#include <iostream>
using namespace std;

int int_to_mini_roman(int number);

int main() {
    int number = 0;
    cin >> number;
    cout << int_to_mini_roman(number) << endl;
    return 0;
}

int int_to_mini_roman(int number) {
    if (number == 0) {
        return 0;
    } else {
        return "ivxlcdm"[number / 1000] + int_to_mini_roman(number % 1000);
    }
}
```