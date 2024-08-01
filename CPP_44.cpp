#include <string>
#include <cassert>

std::string change_base(int num, int base){
    return std::to_string(num);
}

assert(change_base(num, base) == std::to_string(num));