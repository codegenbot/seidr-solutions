#include <cmath>
#include <cassert>
#include <cstddef>
#include <iostream>

bool iscuber(int a){
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a)
            return true;
        i++;
    }
    return false;

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