#include <iostream>
#include <string>

std::string string_sequence(int n) {
    std::string result;
    for (int i = 0; i <= n; ++i) {
        result += std::to_string(i);
        if (i != n) result += " ";
    }
    return result;
}

int main() {
    std::cout << string_sequence(10) << std::endl;
    return 0;
}