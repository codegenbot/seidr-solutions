#include <string>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c >= base && c <= base + 2) || (c >= base + 22 && c <= base + 24) ? tolower(c) : toupper(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = (base == 'A' && c == 'a') ? 'c' : (base == 'a' && c == 'a') ? 'e' : ((base == 'A' && c == 'e') || (base == 'a' && c == 'e')) ? 'g' : ((base == 'A' && c == 'i') || (base == 'a' && c == 'i')) ? 'k' : ((base == 'A' && c == 'o') || (base == 'a' && c == 'o')) ? 'q' : ((base == 'A' && c == 'u') || (base == 'a' && c == 'u')) ? 'w' : 'y';
            }
        }
        result += c;
    }
    return result;
}