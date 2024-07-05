#include <string>
#include <cctype>
#include <iostream>
#include <cassert>

using namespace std;

string encode(string message){
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if (c == 'A') c = 'C';
            else if (c == 'E') c = 'G';
            else if (c == 'I') c = 'K';
            else if (c == 'O') c = 'Q';
            else if (c == 'U') c = 'W';
            else if (c == 'a') c = 'c';
            else if (c == 'e') c = 'g';
            else if (c == 'i') c = 'k';
            else if (c == 'o') c = 'q';
            else if (c == 'u') c = 'w';
        }
        result += c;
    }
    return result;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dqNt kNqW wHcT Tq wRkTg");
    cout << "All tests passed!" << endl;
    return 0;
}