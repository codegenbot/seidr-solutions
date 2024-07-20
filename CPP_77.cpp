#include <cmath>
#include <iostream>

bool iscuber(int a){
    int c = (int)cbrt(a);
    return a == pow(c, 3);
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    if(iscuber(n)) {
        std::cout << n << " is a cube.\n";
    } else {
        std::cout << n << " is not a cube.\n";
    }
    return 0;
}