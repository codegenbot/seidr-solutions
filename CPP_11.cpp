```cpp
#include <sstream>
#include <iostream>

using namespace std;

string string_xor(string a, string b) {
    istringstream is_a(a), is_b(b);
    string result = "";
    for (char c; is_a >> c && is_b >> c; ) {
        if ((c - '0') ^ ('0' - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    cout << string_xor("0101", "0000") << endl;
    return 0;
}