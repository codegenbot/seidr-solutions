#include <iostream>
#include <string>

using namespace std;

int custom_strlen(string str){
    return str.length();
}

int main() {
    assert(custom_strlen("asdasnakj") == 13); 
    return 0;
}