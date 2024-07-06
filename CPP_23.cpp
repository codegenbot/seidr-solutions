```cpp
int str_length(string str){
    return str.length();
}

#include <cassert>
int main() {
    string s = "Hello";
    assert(str_length(s) == 5);
    return 0;
}