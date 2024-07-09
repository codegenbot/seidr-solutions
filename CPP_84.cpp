#include <string>
#include <iostream>

std::string solve(int N) {
    std::string result = "";
    while (N > 0) {
        if (N % 2 == 1)
            result.push_back('1');
        else
            result.push_back('0');
        N /= 2;
    }
    return result;
}

int main() {
    assert(solve(963) == "10010");
    return 0;
}