```cpp
#include <string>

int my_strlen(std::string str) {
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 11); 
    return 0;
}