```cpp
#include <iostream>
#include <string>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if ((int(c) >= 50 && int(c) <= 55) || int(c) == 66 || int(c) == 68 || int(c) == 70) { 
            count++;
        }
    }
    return count;
}

int main_func() {
    std::string num;
    std::cout << "Enter a hexadecimal number: ";
    std::cin >> num;
    int result = hex_key(num);
    if(result != -1) 
        std::cout << "The number of characters in the range [2-7] or ['B', 'D', 'F'] is: " << result << std::endl;
    else
        std::cout << "Invalid input!" << std::endl; 
}