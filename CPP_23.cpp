#include <string>
#include <cassert>
#include <cstring>

int string_length(string str){
    return str.length();
}

int main() {
    assert(string_length("asdasnakj") == 12); 
    return 0;
}