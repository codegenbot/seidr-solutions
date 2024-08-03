#include <algorithm>
#include <sstream>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    istringstream iss(s);
    string word;
    
    while (iss >> word) {
        for (char c : word) {
            result += c;
        }
        for (int i = 0; i < word.length(); ++i) {
            result += word[i];
        }
        result += " ";
    }
    
    return result.substr(0, result.size() - 1);
}