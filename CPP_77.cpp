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
    int num;
    std::cout << " Enter a number: ";
    while (!(std::cin >> num)) {
        std::cout << "Invalid input. Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore(123, '\n');
        std::cin >> num;
    }
    if (iscuber(num)) {
        std::cout << num << " is a perfect cube.\n";
    } else {
        std::cout << num << " is not a perfect cube.\n";
    }
    return 0;
}