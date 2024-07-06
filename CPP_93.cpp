#include <iostream>
#include <string>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isalpha(c) ? (c <= 'z' ? 'a' : 'A') : c;
            c = (c == toupper(base)) ? tolower(c) : toupper(c);
            switch ((c - base) % 26) {
                case 0:
                case 1:
                case 3:
                case 5:
                    c = base + 2;
                    break;
                default:
                    c = base + ((c - base) % 26 + 2) % 26;
                    break;
            }
        }
        result += c;
    }
    return result;
}

int main() {
    assert (encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
    return 0;
}