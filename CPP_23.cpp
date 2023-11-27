#include <string>
#include <cassert>

int strlen(std::string str){
    return str.length();
}

int main() {
    assert (strlen("asdasnakj") == 9);
    return 0;
}