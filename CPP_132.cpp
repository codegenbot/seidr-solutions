#include <string>
#include <algorithm>

bool is_nested(std::string str) {
    int count = 0;
    for (char c : std::move(str)) { 
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