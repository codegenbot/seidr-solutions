#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
using namespace std;

string flip_case(string str) {
    for (int i = 0; i < str.length(); ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    // Additional tests can be added here
    return 0;
}