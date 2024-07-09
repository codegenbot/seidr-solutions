#include <iostream>
#include <cmath>
#include <cassert>

bool isCube(int a) {
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a)
            return true;
        i++;
    }
    return false;
}

int checkNumber(){
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    if(isCube(n))
        std::cout << n << " is a perfect cube.\n";
    else
        std::cout << n << " is not a perfect cube.\n";
}

int main(){
    checkNumber();
    assert (isCube(1729) == false);
}