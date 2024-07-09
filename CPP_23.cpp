#include <iostream>
#include <string>

using namespace std;

int str_len(string str){
    return str.length();
}

int main() {
    assert(str_len("asdasnakj") == 12);
    return 0;
}