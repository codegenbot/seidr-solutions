#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int calculateLength(string str){
    return str.length();
}

int main() {
    string input;
    getline(cin, input);

    int length = calculateLength(input);

    cout << length;

    return 0;
}