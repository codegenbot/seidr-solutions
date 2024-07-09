```cpp
#include <iostream>
#include <cmath>

bool isCube(int a) {
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a)
            return true;
        i++;
    }
    return false;
}

int main(){
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    if(isCube(n))
        std::cout << n << " is a perfect cube.\n";
    else
        std::cout << n << " is not a perfect cube.\n";
    if(isCube(1728)) 
        std::cout << 1728 << " is a perfect cube.\n";
    else
        std::cout << 1728 << " is not a perfect cube.\n";
}