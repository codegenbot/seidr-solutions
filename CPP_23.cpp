#include <iostream>
#include <string>

int my_strlen(std::string str) {
    return str.length();
}

int main() {
    std::string str = "asdasnakj";
    int length = my_strlen(str);
    assert(length == 13);
    std::cout << "The length of 'asdasnakj' is: " << length << "\n";
    return 0;
}