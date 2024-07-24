#include <iomanip>
#include <sstream>

std::string string_to_md5(const std::string& s) {
    unsigned char md[16];
    // ... calculate MD5 hash ...

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)md[i];
    }
    return ss.str();
}