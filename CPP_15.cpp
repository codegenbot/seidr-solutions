#include <iostream>
#include <string>
#include <sstream>

std::string string_sequence(int n) {
    std::ostringstream oss;
    for (int i = 0; i <= n; ++i) {
        oss << i << " ";
    }
    return oss.str();
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << string_sequence(num) << std::endl;
    return 0;
}