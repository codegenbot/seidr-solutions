```cpp
#include <iostream>
#include <string>

int hex_key(std::string num) {
    int count = 0;
    for (auto it = num.begin(); it != num.end(); ++it) { 
        if (((*it >= '2' && *it <= '7') || (*it == 'B' || *it == 'D' || *it == 'F'))){ 
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