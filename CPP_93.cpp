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
        if (tolower(c) == 'a') c = 'C';
        else if (tolower(c) == 'e') c = 'G';
        else if (tolower(c) == 'i') c = 'K';
        else if (tolower(c) == 'o') c = 'Q';
        else if (tolower(c) == 'u') c = 'W';
    }
    return message;
}

int main() {
    string message;
    getline(cin, message);
    cout << encode(message) << endl;
    return 0;
}