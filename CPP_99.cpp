Here is the solution:

```cpp
#include<string>

int closest_integer(string value) {
    double num = stod(value);
    int integerPart = (long long)num;

    if (abs(num - integerPart) < 0.5)
        return integerPart;
    else if (num > integerPart) 
        return integerPart + 1;
    else
        return integerPart - 1;
}