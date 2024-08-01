#include <algorithm>
#include <sstream>

string anti_shuffle(string s) {
    stringstream ss(s);
    string word;
    string result;

    while (getline(ss, word, ' ')) {
        string temp;
        for (char c : word) {
            temp += (c <= 'z' && c >= 'a') ? std::min_element(word.begin(), word.end()) : c;
        }
        result += temp + " ";
    }

    return result.substr(0, result.size() - 1);
}