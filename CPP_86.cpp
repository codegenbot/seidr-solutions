```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& str) {
    int len = str.length();
    for(int i=len-1; i>=0; --i)
        std::cout << str[i];
    return str;
}

int main() {
    std::cout << anti_shuffle("Hi. My name is Mister Robot. How are you?") << std::endl;
    return 0;
}