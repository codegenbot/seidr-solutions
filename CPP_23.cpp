```cpp
#include <cassert>
#include <string>

int myStrlen(const string& str){
    return str.size();
}

int main() {
    assert(myStrlen("asdasnakj") == 9);
}