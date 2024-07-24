#include <sstream>
#include <iomanip>

std::string string_to_md5(const std::string& str) {
    std::stringstream ss;
    unsigned char md[16];

    // Your implementation for generating MD5 here...

    for (int i = 0; i < 16; ++i) {
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)md[i];
    }

    return ss.str();
}