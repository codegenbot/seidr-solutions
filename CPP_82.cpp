Here is the modified code:

```cpp
#include <iostream>
#include <string>

bool prime_length(const std::string& str) {
    int len = static_cast<int>(str.length());
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() 
{
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    input.erase(0, input.find_first_not_of(" ") + 1);
    input.erase(input.find_last_not_of(" ") + 1);
    if (prime_length(std::to_string(input.length()))) {
        std::cout << "The length of the string is prime." << std::endl;
    } else {
        std::cout << "The length of the string is not prime." << std::endl;
    }
}