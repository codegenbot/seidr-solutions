#include <string>

string string_xor(const string& a, const string& b) {
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}

int main() {}