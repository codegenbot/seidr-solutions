```cpp
#include <sstream>
#include <string>

std::string string_to_md5(const std::string& s) {
    // Your md5 implementation goes here...
}

int main() {
    std::stringstream ss;
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    assert(string_to_md5(str).size() != 0);
    ss << std::hex << std::setfill('0') << std::setw(2) << (int)str[0];

    return 0;
}