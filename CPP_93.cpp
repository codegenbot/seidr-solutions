#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string encode(string message) {
    string vowels = "aeiouAEIOU";
    string replace = "cgkqwCGKQW";
    for (char &c : message) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
            auto pos = vowels.find(c);
            if (pos != string::npos) {
                c = replace[pos];
            }
        }
    }
    return message;
}

int main() {
    cout << encode("I DoNt KnOw WhAt tO WrItE") << endl;
    return 0;
}