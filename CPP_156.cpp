```
#include <iostream>
using namespace std;

int int_to_mini_roman(int number) {
    if (number == 0) {
        return "m";
    } else {
        return "ivxlcdm"[number / 1000] + int_to_mini_roman(number % 1000);
    }
}
```