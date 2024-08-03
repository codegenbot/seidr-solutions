#include <string>
using namespace std;

int myStrlen(string str){
    return str.length();
}

int main() {
    assert(myStrlen("asdasnakj") == 12);
    return 0;
}