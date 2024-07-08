```cpp
#include <iostream>
#include <string>

std::string filp_case(const std::string& str){
    std::string result = str; 
    for(int i=0; i<result.length(); i++){
        if(result[i] >= 'a' && result[i] <= 'z'){
            result[i] = std::toupper((char)result[i]);
        } else {
            result[i] = std::tolower((char)result[i]);
        }
    }
    return result;
}

int main() {
    std::cout << filp_case("Hello, world!") << std::endl;
    return 0;
}