```cpp
// Task: Determine whether a given number is a perfect cube.
bool iscuber(int a){
    int c = (int)cbrt(a);
    return a == pow(c, 3);
}

#include <cmath>
#include <iostream>

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    if(iscuber(n)) {
        std::cout << n << " is a perfect cube.\n";
    } else {
        std::cout << n << " is not a perfect cube.\n";
    }

    return 0;
}