#include <string>
#include <iostream>
#include <cassert>

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if ((i % 11 == 0 || i % 13 == 0) && std::to_string(i).find('7') != std::string::npos) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(fizz_buzz(100000) == 8026);
    return 0;
}