```cpp
#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result;
    
    if (x % 3 == 0)
        result += "Fizz";
    if (x % 5 == 0)
        result += "Buzz";
    if (result.empty())
        result = std::to_string(x);
    
    return result;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << fizzBuzz(x) << '\n';
    return 0;
}
```