```cpp
#include <string>
#include <iostream>

std::string solve(int N) {
    int sum = 0;
    string result = "";
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    while (sum > 0) {
        if (sum & 1)
            result.push_back('1');
        else
            result.push_back('0');
        sum >>= 1;
    }
    return std::string(result.rbegin(), result.rend());
}

int main() {
    assert(solve(963) == "10010");
    return 0;
}