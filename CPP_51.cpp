```cpp
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!isvowel(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    cout << remove_vowels("ybcd") << endl;
    return 0;
}