```cpp
#include <cassert>
#include <string>

int strLength(string str){
    return str.length();
}

int main() {
    std::string str = "asdasnakj";
    assert(strLength(str) == 13);
}