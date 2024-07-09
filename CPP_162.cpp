```cpp
#include <sstream>
#include <iomanip>

int main() {
    std::stringstream ss;
    ss << std::setfill(2) << std::setw(2) << std::hex << ((int)md5[i] & 0xFF);
    return 0;
}