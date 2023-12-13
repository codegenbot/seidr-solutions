```cpp
#include <iostream>
#include <sstream>

std::string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0) {
        return "FizzBuzz";
    }
    else if (x % 3 == 0) {
        return "Fizz";
    }
    else if (x % 5 == 0) {
        return "Buzz";
    }
    else {
        std::stringstream ss;
        ss << x;
        return ss.str();
    }
}

int main() {
    int x;
    std::cin >> x;
    std::cout << fizzBuzz(x) << '\n';
    return 0;
}
```