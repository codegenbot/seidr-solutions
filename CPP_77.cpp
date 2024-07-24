```cpp
#include <iostream>
#include <cmath>
#include <cassert>

bool iscuber(int num) {
    int c = round(cbrt(num));
    return (c * c * c == num);
}

int main() {
    assert(iscuber(0) == false);
    std::cout << "Enter a number (or 0 for assertion test): ";
    int num;
    std::cin >> num;
    if(num != 0)
        std::cout << num << " is " << (iscuber(num) ? "" : "not ") << "a perfect cube.\n";
    else
        std::cout << "Assertion test passed.\n";
    return 0;
}