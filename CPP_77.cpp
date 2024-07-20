// Determine whether a given integer is a cube of an integer.
#include <cmath>
#include <iostream>

bool iscuber(int a){
    int c = (int)cbrt(a);
    return a == pow(c, 3);
}

int main(){
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if(iscuber(num))
        std::cout << num << " is a cube of an integer.";
    else
        std::cout << num << " is not a cube of an integer.";

    return 0;
}