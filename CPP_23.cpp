#include <string>
#include <cctype>

size_t strLength(string str){
    return str.length();
}

int main() {
    assert(strLength("asdasnakj") == 11); 
    return 0;
}