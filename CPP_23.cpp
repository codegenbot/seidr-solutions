#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

int getLength(const string& str){
    return str.length();
}

int main(){
    assert (getLength("asdasnakj") == 9);
    // rest of your code
    return 0;
}