#include <string>
#include <cstring>
#include <cassert>

int calculateLength(string str){
    return str.length();
}

int main() {
    assert(calculateLength("asdasnakj") == 9);
    // your code here
    return 0;
}