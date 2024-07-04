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
    assert(flip_case("These Violent Delights Have Violent Ends") == "tHESE vIOLENT dELIGHTS hAVE vIOLENT eNDS");
    string input;
    getline(cin, input);
    cout << flip_case(input) << endl;
    return 0;
}