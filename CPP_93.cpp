#include <iostream>
#include <string>
using namespace std;

string encode(string message){
    string vowels = "aeiouAEIOU";
    string replace = "cgkqwCGKQW";
    for (char &c : message) {
        if (isalpha(c)) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
        size_t pos = vowels.find(c);
        if (pos != string::npos) {
            c = replace[pos];
        }
    }
    return message;
}

int main() {
    cout << encode("I DoNt KnOw WhAt tO WrItE") << endl;
    return 0;
}