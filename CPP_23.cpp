```cpp
#include <cassert>
#include <string>

int myStrlen(string str){
    return str.length();
}

int main() {
    std::string str = "asdasnakj";
    assert(myStrlen(str) == 9);
}