#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int shift = (int)(c - 'a');
            int newShift = (shift + 2 * 26) % 26;
            result += (char)((newShift + 'a'));
        } else if (c >= 'A' && c <= 'Z') {
            int shift = (int)(c - 'A');
            int newShift = (shift + 2 * 26) % 26;
            result += (char)((newShift + 'A'));
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