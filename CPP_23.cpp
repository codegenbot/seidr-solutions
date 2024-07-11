```cpp
#include <string>
#include <cstring>

int strlen(std::string str){
    return str.length();
}

int main() {
    assert (strlen("asdasnakj") == 11); 
    return 0;
}