#include <string>
#include <cassert>
#include <cstring>

int my_strlen(std::string str){
    int length = 0;
    char *ptr = str.c_str();
    while(*ptr != '\0'){
        length++;
        ptr++;
    }
    return length;
}

int main() {
    assert (my_strlen("asdasnakj") == 11); 
    return 0;
}