```cpp
#include <iostream>
#include <cctype>

std::string myString(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (std::isupper(c)) {
            result += std::tolower(c);
        } else if (std::islower(c)) {
            result += std::toupper(c);
        } else {
            result += c;
        }
    }
    return result;  // Return the calculated string
}

int main() {
    assert(myString("These violent delights have violent ends") == "these violent delights have violent ends");
    std::cout << std::string("Hello World"); 
    return 0;
}