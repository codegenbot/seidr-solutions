#include <string>
#include <cassert>

int stringLength(std::string str){
    return str.length();
}

int main(){
    assert(stringLength("asdasnakj") == 9);
    return 0;
}