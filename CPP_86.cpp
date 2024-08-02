#include <algorithm>
#include <sstream>

string anti_shuffle(string s) {
    stringstream ss(s);
    string word;
    string result;

    while (ss >> word) {
        for (char c : word) {
            result += c;
        }
        for (char c : word) {
            if (c > 0) {
                c--;
                result += c;
            }
        }
        result += " ";
    }

    return result.substr(0, result.size() - 1);
}