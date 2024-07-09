#include <sstream>

bool is_nested(std::string str) {
    std::istringstream iss(str);
    int count = 0;
    char c;
    while (iss.get(c)) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
        }
    }
    return count == 0;
}