```cpp
#include <cmath>
#include <iostream>

bool iscuber(int a){
    int c = (int)cbrt(a);
    return c*c*c == a;
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    if(iscuber(n))
        std::cout << n << " is a cube of an integer.\n";
    else
        std::cout << n << " is not a cube of an integer.\n";
    return 0;
}