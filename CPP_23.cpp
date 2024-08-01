#include <string>

int my_strlen(std::string str){
    return str.size();
}

int main(){
    assert(my_strlen("asdasnakj") == 13);
    return 0;
}