#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string string_xor(const string &a, const string &b) {
    string result = "";
    for (size_t i = 0; i < a.size(); ++i) {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    assert(string_xor("1100", "1010") == "0110");
    cout << "All tests passed!" << endl;
    return 0;
}