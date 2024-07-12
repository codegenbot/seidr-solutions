```cpp
#include <string>
#include <cassert>
#include <cstring>

int custom_strlen(string str){
    return str.length();
}

int main(){
    assert(custom_strlen("asdasnakj") == 11);
    return 0;
}