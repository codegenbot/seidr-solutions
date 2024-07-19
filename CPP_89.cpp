#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char base = 'a';
            int shift = (int)(c - base);
            int newShift = (shift + 2 * 26) % 26;
            result += (base + newShift) < 'a'+1 ? base + newShift : 'a' + (newShift-26);
        } else if (c >= 'A' && c <= 'Z') {
            char base = 'A';
            int shift = (int)(c - base);
            int newShift = (shift + 2 * 26) % 26;
            result += (base + newShift) < 'A'+1 ? base + newShift : 'A' + (newShift-26);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(encrypt("a")=="e");
    return 0;
}