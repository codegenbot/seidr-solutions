```cpp
#include <string>

int my_strlen(std::string str){
    return str.length();
}

int main() {
    std::string input = "asdasnakj";
    assert(my_strlen(input) == 12);
}