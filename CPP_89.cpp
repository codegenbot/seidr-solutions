#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char baseChar = isupper(c) ? 'A' : 'a';
            c = ((c - baseChar + 3) % 26) + baseChar;
        }
        result += c;
    }
    return result;
}

int main() {
    assert (encrypt("a")=="d");
    return 0;
}