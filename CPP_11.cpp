#include <iostream>
#include <string>

using namespace std;

std_string string_xor(std_string a, std_string b) {
    std_string result = "";
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    assert (string_xor("0101", "0000") == "0101");
}