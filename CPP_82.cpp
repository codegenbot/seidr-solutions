#include <iostream>
#include <string>

bool prime_length(const std::string& str) {
    int len = str.length();
    for(int i = 2; i <= sqrt(len); ++i){
        if(len%i == 0)
            return false;
    }
    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    bool result = prime_length(str);
    if (result) {
        std::cout << "Prime length" << std::endl;
    } else {
        std::cout << "Not prime length" << std::endl;
    }
    return 0;
}