#include <cassert>
#include <string>
#include <cstring>

int myStrlen(const std::string& str){
    return str.size();
}

int main() {
    assert(myStrlen(std::string("asdasnakj")) == 10);
}