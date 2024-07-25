#include <string>
using namespace std;

int myStrLen(string str){
    return str.length();
}

int main() {
    assert(myStrLen("asdasnakj") == 12); 
    return 0;
}