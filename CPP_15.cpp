#include <iostream>
#include <string>
#include <sstream>

std::string string_sequence(int n) {
    std::ostringstream oss;
    for (int i = 1; i <= n; ++i) {
        oss << i << " ";
    }
    return oss.str();
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << string_sequence(n) << std::endl;
    return 0;
}