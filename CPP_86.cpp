#include <algorithm>
#include <sstream>

string anti_shuffle(string s) {
    istringstream iss(s);
    string word;
    string result;

    while (iss >> word) {
        for (char c : word) {
            result += c;
        }
        for (int i = 0; i < word.length(); ++i) {
            char c = word[i];
            bool found = false;
            for (int j = i + 1; j < word.length(); ++j) {
                if (c >= word[j]) {
                    c = word[j];
                    found = true;
                    break;
                }
            }
            if (!found) {
                result += c;
            } else {
                result += word[i];
                for (int k = i + 1; k < word.length(); ++k) {
                    result += word[k];
                }
            }
        }
    }

    return result;
}