#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string flip_case(string str);

string flip_case(string str){
    for (char &c : str) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << flip_case(input) << endl;
    assert(flip_case("Hello") == "hELLO");
    return 0;
}