#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int string_length(string str) {
    return str.length();
}

int main() {
    assert(string_length("asdasnakj") == 9);
    cout << "Test passed!" << endl;
    return 0;
}