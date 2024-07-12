#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    string word;
    for (char c : s) {
        if (c == ' ') {
            result += word + " ";
            word = "";
        } else {
            int nextCharIndex = 0;
            while (nextCharIndex < word.length()) {
                if (word[nextCharIndex] <= c) {
                    break;
                }
                nextCharIndex++;
            }
            word.insert(nextCharIndex, 1, c);
        }
    }
    result += word;
    return result;
}