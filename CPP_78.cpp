```cpp
#include <iostream>
#include <string>

int hex_key(std::string num) {
    std::string temp;
    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F')) { 
            temp += c; // Store characters that meet the condition in a new string
        }
    }
    return temp.length();
}

int main_func() {
    std::string num;
    std::cout << "Enter a hexadecimal number: ";
    std::cin >> num;
    int result = hex_key(num);
    if(result != 0) 
        std::cout << "The number of characters in the range [2-7] or ['B', 'D', 'F'] is: " << result << std::endl;
    else
        std::cout << "Invalid input!" << std::endl; 
}