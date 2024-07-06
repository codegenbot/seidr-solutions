```cpp
#include<string>
using namespace std;

int str_length(const char* str){
    return string(str).length();
}

int main() {
    assert (str_length("asdasnakj") == 12);
    return 0;
}