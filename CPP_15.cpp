```
#include <sstream>
#include <string>

std::string string_sequence(int n) {
    std::stringstream ss;
    for (int i = 0; i <= n; ++i) {
        ss << i << " ";
    }
    return ss.str();
}