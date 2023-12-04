#include <iostream>
#include <string>
using namespace std;

std::string string_xor(std::string a, std::string b) {
    std::string result = "";
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
    std::string a = "010";
    std::string b = "110";
    cout << string_xor(a,b) << endl;
    return 0;
}
```