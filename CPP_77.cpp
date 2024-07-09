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

int originalMain(){
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    if(isCube(n))
        std::string() + n + " is a perfect cube.\n";
    else
        std::string() + n + " is not a perfect cube.\n";
}

int main(){
    originalMain();
    assert (isCube(1729) == false);
}