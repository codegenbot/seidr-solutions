#include <string>

using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int index = (int)(c - 'a' + 2 * 2) % 26;
            result += 'a' + index;
        } else if (c >= 'A' && c <= 'Z') {
            int index = (int)(c - 'A' + 2 * 2) % 26;
            result += 'A' + index;
        } else {
            result += c;
        }
    }
    return result;
}