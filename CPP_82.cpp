```cpp
#include <string>
#include <cctype>

bool prime_length(std::string str) {
    int len = str.length();
    if(len <= 1) return false;
    for(int i = 2; i*i <= len; i++){
        if(len % i == 0) return false;
        while(len % (i+2) == 0 && i+2 <= len) len /= i+2;
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    assert(prime_length(input) == true); 
    return 0;
}