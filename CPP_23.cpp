#include <string>
#include <cassert>
#include <cstring>

int main() {
    std::string str = "asdasnakj";
    assert(str.length() == 9);
    assert(strlen("asdasnakj") == 9);
    
    return 0;
}  