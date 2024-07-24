#include <iostream>
#include <cmath>
#include <cassert>

int main() {
    assert(iscuber(0) == false);
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (iscuber(num)) {
        std::cout << num << " is a perfect cube.\n";
    } else {
        std::cout << num << " is not a perfect cube.\n";
    }
    return 0;
}

bool iscuber(int num) {
    int c = round(cbrt(num));
    return (c * c * c == num);
}