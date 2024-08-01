#include <algorithm>
#include <sstream>

string anti_shuffle(string s) {
    string result = "";
    istringstream iss(s);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result += c;
        }
        for (int i = 0; i < word.size(); ++i) {
            if (i == 0) {
                result += ' ';
            }
            result += word[i];
        }
    }
    return result;
}