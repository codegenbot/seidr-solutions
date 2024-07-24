#include <iomanip>
#include <sstream>

string_to_md5(int md[16]) {
    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)md[i];
    }
    return ss.str();
}