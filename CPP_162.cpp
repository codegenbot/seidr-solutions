```cpp
#include <sstream>
#include <iomanip>

std::string string_to_md5(const std::string& str) {
    ostringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill(2) << setw(2) << hex << (int)(unsigned char)str[i];
    }
    return ss.str();
}