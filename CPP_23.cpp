```cpp
#include <iostream>
#include <string>

int custom_str_len(std::string str){
    return str.length();
}

int main(){
    std::string user_input;
    std::cout << "Enter a string: ";
    std::cin >> user_input;
    std::cout << "The length of your input is: " << custom_str_len(user_input) << "\n";
    return 0;
}