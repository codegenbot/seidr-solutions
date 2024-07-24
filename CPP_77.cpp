#include <iostream>
#include <cmath>

bool iscuber(int n) {
    int c = 0;
    while (n > 0) {
        c = c * 10 + n % 10;
        n /= 10;
    }
    return pow(c, 1.0/3.0) == round(pow(c, 1.0/3.0));
}

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