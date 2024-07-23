#include <sstream>
#include <string>

std::string string_sequence(int n);

std::string string_sequence(int n) {
    ostringstream oss;
    for (int i = 0; i <= n; i++) {
        oss << i << " ";
    }
    return oss.str();
}