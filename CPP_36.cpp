#include <iostream>
#include <string>
#include <cassert>

int fizz_buzz(int n);

int main() {
    assert(fizz_buzz(100000) == 8026);
    
    return 0;
}