#include <string>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

string encode(string message) {
    transform(message.begin(), message.end(), message.begin(), [](char c) {
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
        }
        return c;
    });
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItTg");

    return 0;
}