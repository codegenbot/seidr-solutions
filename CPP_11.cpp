```c++
#include <string>
#include <bitset>

std::string string_xor(std::string a, std::string b){
    std::string result = "";
    for(int i=0; i<a.length(); i++){
        int num1 = std::stoi(a.substr(i, 1), 0, 2);
        int num2 = std::stoi(b.substr(i, 1), 0, 2);
        if((num1 & num2) == 0)
            result += '0';
        else
            result += '1';
    }
    return result;
}