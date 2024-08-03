#include<string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char base = 'a';
            int shift = 2 * 26;
            c -= base;
            c = (c + shift) % 26;
            c += base;
        } else if (c >= 'A' && c <= 'Z') {
            char base = 'A';
            int shift = 2 * 26;
            c -= base;
            c = (c + shift) % 26;
            c += base;
        }
        result += c;
    }
    return result;
}