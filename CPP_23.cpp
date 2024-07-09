#include <cassert>
#include <string>

int my_length(string str){
    return str.length();
}

int main() {
    assert(my_length("asdasnakj") == 11); 
    return 0;
}