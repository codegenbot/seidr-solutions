Here is the completed code:

```cpp
#include <string>

string int_to_mini_roman(int number) {
    const string ones[] = {"", "i", "ii", "iii", "iv", "v", "vi", "vii", "viii", "ix"};
    const string tens[] = {"", "x", "xx", "xxx", "xl", "l", "lx", "lxx", "lxxx", "xc"};
    const string hundreds[] = {"", "c", "cc", "ccc", "cd", "d", "dc", "dcc", "dccc", "cm"};

    if (number < 1 || number > 1000) {
        return "";
    }

    int hundred = number / 100;
    int remainder = number % 100;

    string roman = hundreds[hundred];
    if (remainder >= 10 && remainder <= 99) {
        int ten = remainder / 10;
        roman += tens[ten];
        remainder %= 10;
    }
    if (remainder > 0) {
        roman += ones[remainder];
    }

    return roman;
}