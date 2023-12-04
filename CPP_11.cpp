```
#include <iostream>
#include <string>
using namespace std;

std::__cxx11::basic_string<char>::const_iterator string_xor(string a, string b) {
    std::__cxx11::basic_string<char>::const_iterator result = "";
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    string a = "010";
    string b = "110";
    cout << string_xor(a,b).length() << endl;
    return 0;
}
```