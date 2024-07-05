#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string encode(string message){
    for (char &c : message) {
        // Swap case
        if (isupper(c)) c = tolower(c);
        else if (islower(c)) c = toupper(c);

        // Replace vowels
        if (c == 'a') c = 'C';
        else if (c == 'e') c = 'G';
        else if (c == 'i') c = 'K';
        else if (c == 'o') c = 'Q';
        else if (c == 'u') c = 'W';
    }
    return message;
}

int main() {
    string message;
    getline(cin, message);
    cout << encode(message) << endl;
    return 0;
}