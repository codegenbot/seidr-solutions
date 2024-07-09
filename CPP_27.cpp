#include <cassert>
#include <string>
using namespace std;

// Define the filp_case function
string filp_case(string str) {
    string output;
    for (char c : str) {
        if (isupper(c)) {
            output += tolower(c);
        } else if (islower(c)) {
            output += toupper(c);
        } else {
            output += c;
        }
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Call the filp_case function
    assert(filp_case(input) == "these violent delights have violent ends");

    return 0;
}