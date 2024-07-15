#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    std::stringstream ss;
    for (unsigned int i = 0; i < text.length(); ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)text[i];
    }

    return ss.str();
}

int main() {
    assert(string_to_md5("password") == "70617373776f7264");
    return 0;
}