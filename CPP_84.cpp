```cpp
#include <iostream>
#include <string>

int solve(int);

int main() {
    assert(solve(963) == "10010");
    return 0;
}

std::string solve(int n) {
    std::string result = "";
    while(n > 0) {
        if(n % 2 == 1)
            result += "1";
        else
            result += "0";
        n /= 2;
    }
    return result;
}