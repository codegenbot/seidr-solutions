#include <cmath>
#include <iostream>

bool iscuber(int a){
    int i = 1;
    while (pow(i,3) <= a){
        if(pow(i,3) == a)
            return true;
        i++;
    }
    return false;
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if(iscuber(num)) {
        std::cout << "The number is a perfect cube.\n";
    } else {
        std::cout << "The number is not a perfect cube.\n";
    }

    return 0;
}