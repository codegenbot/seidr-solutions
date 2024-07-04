#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

string flip_case(const string& str) {
    string result = str;
    for (char &c : result) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    cout << "All tests passed!" << endl;
    return 0;
}