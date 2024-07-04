#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

string flip_case(string str) {
    for (char &c : str) {
        if (islower(c))
            c = toupper(c);
        else if (isupper(c))
            c = tolower(c);
    }
    return str;
}

int main() {
    // Sample assertion, can be omitted or replaced as needed
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    string input;
    getline(cin, input);
    cout << flip_case(input) << endl;
    return 0;
}