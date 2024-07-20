#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;
    while (pos < s.length()) {
        size_t nextSpace = s.find(' ', pos);
        if (nextSpace == string::npos)
            nextSpace = s.length();
        string word = s.substr(pos, nextSpace - pos);
        for (char &c : word) {
            result += (char)(c);
        }
        for (size_t i = 0; i < word.length(); i++) {
            for (size_t j = i + 1; j <= word.length() - 1; j++) {
                if (word[i] > word[j]) {
                    char temp = word[i];
                    word[i] = word[j];
                    word[j] = temp;
                }
            }
        }
        result += " ";
        pos = nextSpace + 1;
    }
    return result.substr(0, result.length() - 1);
}