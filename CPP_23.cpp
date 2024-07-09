#include <iostream>
#include <string>

int str_len(const std::string& str){
    return str.length();
}

int main(){
    assert (str_len("asdasnakj") == 12); 
    return 0;
}