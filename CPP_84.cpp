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
    // reverse the binary string to get correct output
    std::string binStr = result;
    for (int i = 0; i < binStr.length(); i++) {
        if (i == 0) continue;
        char c = binStr[i];
        binStr[i] = binStr[0];
        binStr[0] = c;
    }
    return binStr;
}

int main() {
    assert(solve(963) == "10010");
    return 0;
}