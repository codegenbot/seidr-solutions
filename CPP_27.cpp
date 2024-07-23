```cpp
#include <iostream>
#include <string>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            result += toupper(str[i]);
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    std::cout << flip_case("Hello World!") << std::endl;
    return 0;
}