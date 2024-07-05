#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int my_strlen(const string& str) {
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 9);
    cout << "Test passed!" << endl;
    return 0;
}