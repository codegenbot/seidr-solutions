#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string encode(string message){
    for (char &c : message) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = char(c + 2);
            }
        }
    }
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "K DqNt KnQw WhCt Tq WrKtG");
    return 0;
}