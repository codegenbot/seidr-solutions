#include <iostream>
#include <string>

int stringLength(const string& str){
    return str.length();
}

int main(){
    assert (stringLength("asdasnakj") == 9);
    return 0;
}