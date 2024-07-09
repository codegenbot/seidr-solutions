```cpp
#include <string>

int int_to_mini_roman(int n) {
    if (n <= 0)
        return 0;
    else if (n >= 1000)
        return "M" + int_to_mini_roman(n - 1000);
    else if (n >= 900)
        return "CM" + int_to_mini_roman(n - 900);
    else if (n >= 500)
        return "D" + int_to_mini_roman(n - 500);
    else if (n >= 400)
        return "CD" + int_to_mini_roman(n - 400);
    else if (n >= 100)
        return "C" + int_to_mini_roman(n - 100);
    else if (n >= 90)
        return "XC" + int_to_minor_roman(n - 90);
    else if (n >= 50)
        return "L" + int_to_mini_roman(n - 50);
    else if (n >= 40)
        return "XL" + int_to_mini_roman(n - 40);
    else if (n >= 10)
        return "X" + int_to_mini_roman(n - 10);
    else if (n >= 9)
        return "IX" + int_to_mini_roman(n - 9);
    else if (n >= 5)
        return "V" + int_to_mini_roman(n - 5);
    else if (n >= 4)
        return "IV" + int_to_mini_roman(n - 4);
    else
        return "I" + int_to_mini_roman(n - 1);
}