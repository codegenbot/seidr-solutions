#include <algorithm>
#include <sstream>

string anti_shuffle(string s) {
    string result = "";
    istringstream iss(s);
    string word;
    
    while (iss >> word) {
        string new_word = "";
        for (char c : word) {
            new_word += c;
        }
        sort(new_word.begin(), new_word.end());
        result += new_word + " ";
    }
    
    return result.substr(0, result.length() - 1);
}