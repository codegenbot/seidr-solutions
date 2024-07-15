#include <cctype>
#include <string>

using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += ((c - base + 2 * 26) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    return 0;
}