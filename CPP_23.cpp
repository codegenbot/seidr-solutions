```cpp
#include <string>
#include <cassert>

int str_length(std::string str){
    return str.length();
}

int main(){
    assert(str_length("asdasnakj") == 13);
    return 0;
}