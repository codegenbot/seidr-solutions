```c++
#include <cassert>
#include <cstring>

int strLength(string str){
    return str.length();
}

int main() {
    assert(strLength("asdasnakj") == 9);
}