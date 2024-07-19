```
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
    return result;
}

int testMain() {
    assert(solve(963) == "10010");
    std::cout << solve(15) << std::endl;
    return 0;
}