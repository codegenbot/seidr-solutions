#include <iostream>
#include <string>

std::string string_sequence(int n) {
    std::string result = "";
    for (int i = 0; i <= n; i++) {
        result += std::to_string(i) + " ";
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::string output = string_sequence(n);
    std::cout << "String sequence: " << output << std::endl;
    return 0;
}