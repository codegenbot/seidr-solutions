#include <string>
using namespace std;

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!strchr("aeiouAEIOU", tolower(c)) == NULL) {
            result += c;
        }
    }
    return result;
}