```cpp
#include <iostream>
#include <string>

int str_length(std::string str){
    return str.length();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    assert(str_length(input) > 0);
    return 0;
}