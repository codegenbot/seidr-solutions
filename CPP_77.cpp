```
#include <iostream>
#include <cmath>

bool iscuber(int a){
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
    if(iscuber(n))
        std::cout << std::to_string(n) << " is a perfect cube.\n";
    else
        std::cout << std::to_string(n) << " is not a perfect cube.\n";
}