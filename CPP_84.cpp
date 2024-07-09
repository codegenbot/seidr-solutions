```cpp
#include <iostream>
#include <cassert>

using namespace std;

int solve(int n) {
    string binary = "";
    while(n > 0) {
        if(n % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        n /= 2;
    }
    return stoi(binary);
}

assert(solve(963) == 10);