#include <iostream>
bool iscuber(int); 

int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    if (iscuber(a)) {
        std::cout << "The number is a perfect cube." << std::endl;
    } else {
        std::cout << "The number is not a perfect cube." << std::endl;
    }
    return 0;
}

bool iscuber(int x) { 
    int y = cbrt(x);
    if (y * y * y == x)
        return true;
    else
        return false;
}