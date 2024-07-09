#include <string>
#include <cassert>

std::string change_base(int x, int base){
    assert(base >= 2 && base <= 36);
    std::string result = "";
    while (x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}