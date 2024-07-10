#include <string>
#include<cassert>

int strLength(string str) {
    return str.length();
}

int main(){
    assert (strLength("asdasnakj") == 12); 
    return 0;
}