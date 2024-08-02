#include <cassert>
#include <cstring>
#include <iostream>

int customFunction(const char* input) {
    return strlen(input);
}

int main() {
    const char* input = "asdasnakj";
    int result = customFunction(input);
    std::cout << result << std::endl;
    return 0;
}