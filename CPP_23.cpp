```cpp
#include <string>
using namespace std;

int myStrLen(string str){
    return str.length();
}

int main() {
    assert(myStrLen("asdasnakj") == 11); 
    return 0;
}