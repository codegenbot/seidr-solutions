#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += s[i];
        } else {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i++];
            }
            for (char c : word) {
                result += (word[0] == *min_element(word.begin(), word.end()) ? c : ' ');
            }
        }
    }
    return result;
}