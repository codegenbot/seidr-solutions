```cpp
#include <string>

int my_strlen(std::string str){
    return str.length();
}

int main() {
    char input[] = "asdasnakj";
    input[12] = '\0';
    std::string str(input); 
    assert(my_strlen(str) == 12);
}