
#include <iostream>

int main() {
    std::string str;
    int n = 0;
    while (n < 10) {
        str.push_back(static_cast<char>(n));
        n++;
    }
    std::cout << "The string is: " << str.length() << '\n';
    return 0;
}