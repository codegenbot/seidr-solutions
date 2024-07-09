```cpp
#include <string>
#include <cassert>
#include <cstring>

int my_strlen(string str){
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 12); 
    return 0;
}