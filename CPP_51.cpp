#include <iostream>
#include <string>

using namespace std;

string remove_vowels(string text) {
    string result;
    for (char c : text) {
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
              || toupper(c) == 'A' || toupper(c) == 'E' || toupper(c) == 'I'
              || toupper(c) == 'O' || toupper(c) == 'U')) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert (remove_vowels("ybcd") == "ybcd");
    return 0;
}