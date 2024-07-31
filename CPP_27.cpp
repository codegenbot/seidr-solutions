```cpp
#include <iostream>
#include <cctype>

std::string myString(std::string str) {
    std::string result = "";
    for (char c : str) {
        result.push_back((c >= 'A' && c <= 'Z') ? tolower(c) : toupper(c));
    }
    return result;  
}

int main() {
    assert(myString("These violent delights have violent ends") == "these violent delights have violent ends");
    std::cout << "Hello World"; 
    return 0;
}