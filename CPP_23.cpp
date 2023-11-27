#include <iostream>
#include <string>

using namespace std;

int strlen(const string& str){
    return str.size();
}

int main(){
    assert (strlen("asdasnakj") == 9);
    return 0;
}