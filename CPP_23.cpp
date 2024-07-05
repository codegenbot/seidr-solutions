#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int my_strlen(string str) {
    return str.length();
}

int main() {
    string input;
    cin >> input;
    cout << my_strlen(input) << endl;
    return 0;
}