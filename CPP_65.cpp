#include <iostream>
#include <string>

std::string circular_shift(int x, int shift) {
    if (x == 0)
        return "0";
    
    std::string str = std::to_string(x);
    int n = str.length();
    
    if (shift > n) 
        shift %= n;
    
    if (shift >= n/2) {
        for (int i = 0; i < n - shift; i++)
            str += str.substr(0, 1);
        str.erase(0, 1);
    } else
        str = str.substr(shift) + str.substr(0, shift);

    return str;
}

int main() {
    int x, shift;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Enter the number of shifts: ";
    std::cin >> shift;
    std::cout << "Circular Shifted Number is : " << circular_shift(x, shift) << std::endl;
    return 0;
}