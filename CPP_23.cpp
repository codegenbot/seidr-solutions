```cpp
#include <cassert>
#include <string>

int strLength(std::string str){
    return str.length();
}

int main() {
    assert(strLength(std::string("asdasnakj")) == 13);
}