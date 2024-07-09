#include <string>

int str_length(std::string str){
    return str.length();
}

int main() {
    assert(str_length("asdasnakj") == 12);
    return 0;
}