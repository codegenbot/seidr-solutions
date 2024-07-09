```cpp
#include <string>
#include <cassert>
#include <cstring>
using namespace std;

int strlen(string str){
    return str.length();
}

int main() {
    assert(strlen("asdasnakj") == 12); 
    return 0;
}