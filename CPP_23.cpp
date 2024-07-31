```cpp
#include <string>

int my_strlen(char* str){
    return std::string(str).length();
}

int main() {
    assert(my_strlen("asdasnakj") == 12);
}