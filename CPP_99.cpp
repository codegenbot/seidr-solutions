```cpp
#include <iostream>
#include <cmath>

int closest_integer(double num) {
    if (num >= 0) {
        return static_cast<int>(std::ceil(num));
    } else {
        return static_cast<int>(std::floor(num));
    }
}

int main1() { 
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num; 
    std::cout << "The closest integer is: " << closest_integer((double)num) << std::endl;

    assert(closest_integer(0.0) == 0); 

}

int main() {
    return main1();
}