#include <cstring>
#include <string>

int main() {
    std::string str = "asdasnakj";
    assert(strlen(str.c_str()) == 9);
    
    return 0;
}