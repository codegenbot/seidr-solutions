```cpp
#include <sstream>
#include <iomanip>

int main() {
    std::stringstream ss;
    ss << std::setfill(2) << std::setw(2) << std::hex << std::to_string((int)md5[i]);
    return 0;
}