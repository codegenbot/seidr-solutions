```cpp
#include <iostream>
#include <string>

using namespace std;

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? tolower(c) : toupper(c);
        } else {
            result += c;
        }
    }
    if (result.empty()) {
        reverse(result.begin(), result.end());
    }
    return result;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}