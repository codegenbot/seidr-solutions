#include <cassert>
#include <string>

int strLength(const char* str){
    return std::string(str).length();
}

int main() {
    assert(strLength("asdasnakj") == 13);
}