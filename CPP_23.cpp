#include <cassert>
#include <string>

int myStrlen(const std::string& str){
    return str.size();
}

int main() {
    assert(myStrlen("asdasnakj") == 11);
}