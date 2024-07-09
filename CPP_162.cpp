#include <sstream>
#include <iomanip>

std::stringstream ss;

void string_to_md5(const std::string& str) {
    unsigned char md5[16];
    // Your implementation here
    for (int i = 0; i < 16; i++) {
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)md5[i];
    }
}