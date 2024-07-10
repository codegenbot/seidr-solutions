```cpp
#include <string>

int strLength(string str) {
    return str.length();
}

int main(){
    assert (strLength("asdasnakj") == 12); // correct length
    return 0;
}