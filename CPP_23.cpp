#include <string>
#include <cassert>

int str_len(const std::string& str){
    return str.length();
}

int main_func() {
    assert(str_len("asdasnakj") == 13); 
    return 0;
}