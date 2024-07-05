#include <string>
#include <cctype>
#include <cassert>

using namespace std;

string flip_case(string str) {
    for (char &c : str) {
        if (isupper(c))
            c = tolower(c);
        else if (islower(c))
            c = toupper(c);
    }
    return str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOlent DELIGHTS HAVE VIOtent ENDS");
    return 0;
}