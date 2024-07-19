#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char base = 'a';
            int shift = (int)(c - base);
            int newShift = (shift + 3) % 26;
            result += (base + newShift);
        } else if (c >= 'A' && c <= 'Z') {
            char base = 'A';
            int shift = (int)(c - base);
            int newShift = (shift + 3) % 26;
            result += (base + newShift);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(encrypt("a")=="d");
    return 0;
}