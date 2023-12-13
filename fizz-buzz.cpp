```cpp
#include <iostream>
#include <string>

std::string intToString(int x) {
    if (x == 0) {
        return "0";
    }

    std::string result;
    bool isNegative = false;

    if (x < 0) {
        isNegative = true;
        x = -x;
    }

    while (x > 0) {
        char digit = '0' + (x % 10);
        result = digit + result;
        x /= 10;
    }

    if (isNegative) {
        result = '-' + result;
    }

    return result;
}

std::string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0) {
        return "FizzBuzz";
    } else if (x % 3 == 0) {
        return "Fizz";
    } else if (x % 5 == 0) {
        return "Buzz";
    } else {
        return intToString(x);
    }
}

int main() {
    int x;
    std::cin >> x;
    std::cout << fizzBuzz(x) << '\n';
    return 0;
}
```