#include <string>
#include <cassert>
#include <cstring>

int my_string_length(std::string str){
    return str.length();
}

int main() {
    assert(my_string_length("asdasnakj") == 12); 
    return 0;
}