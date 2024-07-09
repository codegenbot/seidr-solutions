```cpp
#include <cmath>
#include <iostream>

bool iscuber(int a){
    int i = 1;
    while (true) {
        if (pow(i, 3) == a) {
            return true;
        }
        if (i * i > a) {
            return false;
        }
        i++;
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if(iscuber(n))
        std::cout << n << " is a perfect cube."<<std::endl;
    else
        std::cout << n << " is not a perfect cube."<<std::endl;
    return 0;
}