#include <string>

string string_xor(const string& a, const string& b) {
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        result += (a[i] != b[i]) ? '1' : '0';
    }
    return result;
}

int main() {
    assert (string_xor("0101", "0000") == "0101");
    return 0;
}