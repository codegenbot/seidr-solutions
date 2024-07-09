```cpp
#include <cassert>
#include <string>

int strLength(string str){
    return str.length();
}

int mainFunction() {
    assert(strLength("asdasnakj") == 11); 
}