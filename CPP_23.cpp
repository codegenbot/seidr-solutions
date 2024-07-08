```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "asdasnakj";
    for (int i = 0; i < 13; ++i) {
        str += 'a';
    }
    std::cout << "The length of 'asdasnakj' is: " << str.length() << "\n";
    return 0;
}