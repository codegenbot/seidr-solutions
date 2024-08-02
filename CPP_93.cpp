#include<string>
#include<algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c >= base && c <= base + 25 - 1) ? (char)(base + 13) : (char)(base + 6);
        }
        result += c;
    }
    return result;
}