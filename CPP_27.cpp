```cpp
#include <string>
#include <cassert>
using namespace std;

// Function to flip case of a string
string flip_case(string str) {
    // Swap case of each character in the input string
    for (int i = 0; i < str.size(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    // Input string
    string input_string = "These violent delights have violent ends";

    // Expected output
    string expected_output = "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS";

    // Call flip_case function and assert that the result is as expected
    assert(flip_case(input_string) == expected_output);

    return 0;
}
```