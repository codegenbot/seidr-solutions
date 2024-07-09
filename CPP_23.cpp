#include <cassert>
#include <string>

int strLength(const char* str){
    return static_cast<int>(std::strlen(str));
}

int main() {
    assert(strLength("asdasnakj") == 13);
}