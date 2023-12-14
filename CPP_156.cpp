```
#include <iostream>
using namespace std;

string int_to_mini_roman(int number) {
    if (number == 0) {
        return "nulla";
    } else {
        return "ivxlcdm"[number / 1000] + int_to_mini_roman(number % 1000);
    }
}

int main() {
    int number = 0;
    cin >> number;
    cout << int_to_mini_roman(number) << endl;
    return 0;
}
```