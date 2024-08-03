```cpp
#include <iostream>
#include <string>

int my_strlen(std::string str){
    return str.length();
}

int main(){
    std::cout << "Enter a string: ";
    std::string s;
    std::cin >> s;
    assert(my_strlen(s) == s.length());
    return 0;
}