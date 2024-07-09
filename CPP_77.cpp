```
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
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(iscuber(num)) {
        std::cout << num << " is a perfect cube.\n";
    } else {
        std::cout << num << " is not a perfect cube.\n";
    }
    return 0;
}