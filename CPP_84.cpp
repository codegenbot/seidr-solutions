```cpp
#include <iostream>
#include <string>

std::string solve(int num) {
    std::string result = "";
    while (num > 0) {
        if (num % 2 == 0)
            result += "0";
        else
            result += "1";
        num /= 2;
    }
    return std::string(result);
}

int main() {
    assert(solve(963) == "10010");
    return 0;
}