#include <string>
#include <iostream>
#include <cassert>

std::string string_sequence(int n) {
    std::string result = "";
    for (int i = 0; i <= n; ++i) {
        if (i > 0) result += " ";
        result += std::to_string(i);
    }
    return result;
}

int main() {
    assert(string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 10");
    std::cout << string_sequence(10) << std::endl;
    return 0;
}