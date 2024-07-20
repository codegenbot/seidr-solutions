#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string encoded_message = message;
    
    for (char& c : encoded_message) {
        if (isalpha(c)) {
            c = isupper(c) ? tolower(c) : toupper(c); // Swap case
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = c + 2 > 'z' ? c - 24 : c + 2; // Replace vowels
            }
        }
    }
    
    return encoded_message;
}