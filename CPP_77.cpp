```cpp
#include <cmath>
#include <iostream>

bool iscuber(int a){
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a) return true;
        i++;
    }
    return false;
}

int main(){
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    if(iscuber(n)){
        std::cout << "The number is a perfect cube.\n";
    } else {
        std::cout << "The number is not a perfect cube.\n";
    }
}