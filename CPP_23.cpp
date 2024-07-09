```c++
#include <cassert>
#include <string>

int my_string_length(string str){
    return str.length();
}

int main() {
    assert(my_string_length("asdasnakj") == 11); 
    return 0;
}