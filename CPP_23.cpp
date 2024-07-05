#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int my_strlen(string str) {
    return str.length();
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Length of the string is: " << my_strlen(input) << endl;
    
    // Test case
    assert(my_strlen("asdasnakj") == 9);
    return 0;
}