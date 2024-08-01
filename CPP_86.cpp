#include <algorithm>
#include <sstream>

string anti_shuffle(string s) {
    stringstream ss(s);
    string word;
    string result;

    while (getline(ss, word, ' ')) {
        for (char c : word) {
            result += c;
        }
        result += " ";
    }

    return result.substr(0, result.size() - 1); // Remove the extra space at the end
}