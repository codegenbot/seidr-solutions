```cpp
#include <cassert>
#include <string>

int myStrlen(string str){
    return str.length();
}

int main() {
    assert(myStrlen("asdasnakj") == 9);
}