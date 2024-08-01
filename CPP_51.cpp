#include <string>
#include <cctype>

using namespace std;

string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (!strchr("aeiouAEIOU", tolower(c)) != nullptr) {
            result += c;
        }
    }
    return result;
}