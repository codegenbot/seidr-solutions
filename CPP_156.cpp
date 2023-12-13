```cpp
#include <iostream>
using namespace std;

string int_to_mini_roman(int number) {
    if (number == 0) {
        return "";
    } else {
        return "ivxlcdm"[number / 1000] + int_to_mini_roman(number % 1000);
    }
}

int main() {
    assert(int_to_mini_roman(1) == "i");
    assert(int_to_mini_roman(4) == "iv");
    assert(int_to_mini_roman(5) == "v");
    assert(int_to_mini_roman(9) == "ix");
    assert(int_to_mini_roman(10) == "x");
    assert(int_to_mini_roman(40) == "xl");
    assert(int_to_mini_roman(50) == "l");
    assert(int_to_mini_roman(90) == "xc");
    assert(int_to_mini_roman(100) == "c");
    assert(int_to_mini_roman(400) == "cd");
    assert(int_to_mini_roman(500) == "d");
    assert(int_to_mini_roman(900) == "cm");
    assert(int_to_mini_roman(1000) == "m");
}
```