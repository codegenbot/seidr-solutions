#include <string>

int mystrlen(std::string str){
    return str.length();
}

int main(){
    assert(mystrlen("asdasnakj") == 12);
    return 0;
}