#include <string>

int strLength(std::string str){
    return str.length();
}

int main(){
    assert (strLength("asdasnakj") == 9);
    return 0;
}