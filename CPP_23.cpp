#include <string>
#include <cassert>
#include <cstring>

int str_len(const std::string& str){
    return str.length();
}

int main() {
    assert(str_len("asdasnakj") == 13); 
    return 0;
}