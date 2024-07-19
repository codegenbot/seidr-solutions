#include <string>
#include <cassert>
#include <cstring>

int my_strlen(std::string str){
    return str.length();
}

int main() {
    assert (my_strlen("asdasnakj") == 12); 
    return 0;
}