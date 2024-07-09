#include <cassert>
#include <string>

int my_str_len(string str){
    return str.length();
}

int main() {
    assert(my_str_len("asdasnakj") == 11); 
    return 0;
}