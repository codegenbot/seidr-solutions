#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int my_strlen(string str) {
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 9);
    string input;
    while (getline(cin, input)) {
        cout << my_strlen(input) << endl;
    }
    return 0;
}