```cpp
#include <cassert>
#include <string>

int my_strlen(std::string str){
    return str.length();
}

int test() {
    assert(my_strlen("asdasnakj") == 12); 
    return 0;
}