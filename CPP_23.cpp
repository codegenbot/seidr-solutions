#include <string>
#include <cassert>

int my_str_len(const std::string& str){
    return str.length();
}

int main() {
    assert(my_str_len("asdasnakj") == 13); 
    return 0;
}