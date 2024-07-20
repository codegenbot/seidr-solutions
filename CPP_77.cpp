// Task description: Check if a number is a perfect cube.
#include <cmath>
#include <iostream>

bool iscuber(int a){
    int c = (int)cbrt(a);
    return a == pow(c, 3);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(iscuber(num)) {
        std::cout << num << " is a perfect cube." << std::endl;
    } else {
        std::cout << num << " is not a perfect cube." << std::endl;
    }

    return 0;
}