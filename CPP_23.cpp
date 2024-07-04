#include <string>
#include <cassert>
using namespace std;

int stringLength(string str) {
    return str.length();
}

int main() {
    assert(stringLength("asdasnakj") == 9);
    return 0;
}