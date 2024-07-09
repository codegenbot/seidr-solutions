#include <algorithm>
#include <sstream>

using namespace std;

string anti_shuffle(string s) {
    stringstream ss(s);
    string word;
    string result;

    while (ss >> word) {
        for (char c : word) {
            result += c;
        }
        for (int i = 0; i < word.size(); ++i) {
            char c = word[i];
            bool found = false;
            for (int j = i + 1; j < word.size(); ++j) {
                if (c >= word[j]) {
                    swap(word[i], word[j]);
                    found = true;
                    break;
                }
            }
            if (!found) {
                result += c;
            }
        }
        result += ' ';
    }

    return result.substr(0, result.size() - 1);
}