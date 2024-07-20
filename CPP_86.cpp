#include <algorithm>
#include <string>
#include <boost/lexical_cast.hpp>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += s[i];
        } else {
            string word;
            for (int j = i; j < s.size() && s[j] != ' '; j++) {
                word += s[j];
            }
            for (char c : word) {
                char ch = (c <= 'z' && c >= 'a') ? (c + 1 > 'z' ? 'a' : c + 1) : c;
                result += boost::lexical_cast<string>(ch);
            }
            i = j - 1;
        }
    }
    return result;
}