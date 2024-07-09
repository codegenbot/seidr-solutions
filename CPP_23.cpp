```cpp
#include <cassert>
#include <string>
#include <cstring>

int myStrlen(const std::string& str){
    return str.size();
}

int main() {
    assert(myStrlen("asdasnakj") == 10);
}