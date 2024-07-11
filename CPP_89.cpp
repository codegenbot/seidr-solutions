#include <string>
#include <cassert>

using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted = c + 2 * ('z' - c) + 1;
            if (encrypted > 'z') {
                encrypted = 'a' + (encrypted - 'z' - 1);
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    // Add more test cases if needed
    return 0;
}