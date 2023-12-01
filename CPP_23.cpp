#include <string>

int stringLength(const string& str){
    return str.size();
}

int main() {
    assert(stringLength("asdasnakj") == 9);
    return 0;
}