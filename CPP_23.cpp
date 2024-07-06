```cpp
#include <string>
#include <cassert>
#include <cstring>

int str_len(const std::string& str){
    return strlen(str.c_str());
}

int main() {
    return 0;
}