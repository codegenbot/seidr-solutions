#include <sstream>
#include <string>

std::string decimal_to_binary(int decimal) {
    std::ostringstream oss;
    oss << "db";
    while (decimal > 0) {
        oss << (decimal % 2 == 0 ? "0" : "1");
        decimal /= 2;
    }
    oss << "db";
    return oss.str();
}