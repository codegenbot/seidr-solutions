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
    string input;
    cout << "Enter the message: ";
    getline(cin, input);
    cout << encode(input) << endl;
    return 0;
}