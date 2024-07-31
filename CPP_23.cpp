```cpp
#include <string>

int my_strlen(std::string str){
    return str.length();
}

int main() {
    char input[] = "asdasnakj";
    std::string str(input); 
    assert(my_strlen(str) == 12);
}