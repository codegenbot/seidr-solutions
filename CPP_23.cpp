#include <string>
#include <cassert>
#include <cstring>
using namespace std;

int calculateLength(string str){
    return strlen(str.c_str());
}

int main() {
    assert(calculateLength("asdasnakj") == 9);
    // your code here
    return 0;
}