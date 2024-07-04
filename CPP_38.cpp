#include <string>
#include <cassert>
using namespace std;

string decode_cyclic(string s){ 
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

// Assuming there is a function `encode_cyclic` which is not given in the task.
// For completeness, the function signature should be something like the following:
string encode_cyclic(string s);

int main() {
    string str = "example"; // Sample string input
    string encoded_str = encode_cyclic(str); // This function should be defined
    assert(decode_cyclic(encoded_str) == str);

    return 0;
}