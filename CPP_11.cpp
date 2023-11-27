#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string string_xor(const string& a, const string& b) {
    string result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            result += '0';
        } else {
            result += '1';
        }
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    // Add more test cases here...
    assert(string_xor("0110", "1010") == "1100");
    assert(string_xor("1111", "0000") == "1111");
    assert(string_xor("10101010", "11111111") == "01010101");

    cout << "All test cases passed!" << endl;

    return 0;
}