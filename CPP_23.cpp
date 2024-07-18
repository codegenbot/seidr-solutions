#include <string>

int function_name(const std::string& str) {
    return str.length();
}

int main() {
    assert(function_name("asdasnakj") == 9);
    // Add more test cases if needed
    return 0;
}