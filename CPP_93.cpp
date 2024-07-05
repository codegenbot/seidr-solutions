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
        if (c == 'a' || c == 'A') c = 'C';
        else if (c == 'e' || c == 'E') c = 'G';
        else if (c == 'i' || c == 'I') c = 'K';
        else if (c == 'o' || c == 'O') c = 'Q';
        else if (c == 'u' || c == 'U') c = 'W';
    }
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
    cout << "All tests passed!" << endl;
    return 0;
}