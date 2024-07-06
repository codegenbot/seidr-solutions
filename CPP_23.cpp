#include<string>
#include<assert.h>
#include<cstring>

using namespace std;

int str_length(string str){
    return str.length();
}

int main2() {
    assert (str_length("asdasnakj") == 12);
    return 0;
}