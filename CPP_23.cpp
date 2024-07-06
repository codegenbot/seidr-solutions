#include <string>

int str_len(const std::string& str){
    return str.length();
}

int main() {
    assert(str_len("asdasnakj") == 13); 
    return 0;
}