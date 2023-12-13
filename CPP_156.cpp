#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, world!";
    int num = 5;
    str.insert(const_cast<string::iterator>(num), 'X');
    cout << str << endl;
    return 0;
}