#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                result += (char)(base + ((c - base) + 2) % 26);
            } else {
                result += (char)(base + ((c - base) + 1) % 26);
            }
        } else {
            result += c;
        }
    }
    return result;
}