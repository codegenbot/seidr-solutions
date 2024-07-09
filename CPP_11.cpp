#include <string>
#include <cassert>

std::string string_xor(std::string a, std::string b);

#include <iostream>

std::string string_xor(std::string a, std::string b) {
    std::string result;
    for(int i=0; i<a.size(); i++){
        if(a[i] == b[i]){
            result += "0";
        } else {
            result += "1";
        }
    }
    return result;
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::string result = string_xor(a, b);
    std::cout << result << std::endl;
    return 0;
}