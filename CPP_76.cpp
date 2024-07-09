#include <iostream>
#include <string>

bool isSimplePower(int num) {
    for(int base = 2; base * base <= num; ++base) {
        int power = 1;
        while (power * base <= num) {
            if ((power * base) == num) {
                return true;
            }
            ++power;
        }
    }
    return false;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::string strNum = std::to_string(num); 
    if (isSimplePower(num)) {  
        std::cout << strNum << " is a simple power.\n";
    } else {
        std::cout << strNum << " is not a simple power.\n";
    }
    return 0;
}