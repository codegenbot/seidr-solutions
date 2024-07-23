````
#include <algorithm>
#include <string>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == ' ') {
            result += " ";
            i++;
        } else {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (int j = 0; j < word.length(); j++) {
                result += word[j];
            }
            // Add back the remaining characters
            while (i < s.length()) {
                result += s[i];
                i++;
            }
        }
    }
    return result;
}
```