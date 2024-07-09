```c++
#include <cassert>
#include <iostream>
#include <string>

int solve(int n) {
    std::string binary = "";
    while(n > 0) {
        if(n % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        n /= 2;
    }
    return binary.length() == 0 ? -1 : std::stoi(binary, 0, 2);
}

int main() {
    assert(solve(963) == 18); 
    return 0;
}