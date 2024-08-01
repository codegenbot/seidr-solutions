```cpp
#include <string>
#include <cctype>

using namespace std;

string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (!strchr("aeiouAEIOU", tolower(c))) {
            result += c;
        }
    }
    return result;
}