#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c == toupper(base)) ? tolower(base) : toupper(base);
            switch (c - base) {
                case 0:
                case 1:
                    c += 2;
                    break;
                default:
                    if (c < base + 3)
                        c = base + 25;
                    else
                        c -= 2;
            }
        }
        result += c;
    }
    return result;
}

int main() {
    cout << encode("This is a message") << endl;
    return 0;
}