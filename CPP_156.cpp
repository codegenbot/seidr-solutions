
```
#include <Python.h>

int int_to_mini_roman(int number) {
    if (number == 0) {
        return "";
    } else {
        return "ivxlcdm"[number / 1000] + int_to_mini_roman(number % 1000);
    }
}
```