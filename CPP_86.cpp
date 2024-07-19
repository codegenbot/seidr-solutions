#include <algorithm>
#include <sstream>

using namespace std;

string anti_shuffle(string s) {
    stringstream ss(s);
    string word;
    string result = "";
    
    while (getline(ss, word, ' ')) {
        for (char c : word) {
            result += c;
        }
        result += " ";
    }
    
    return result.substr(0, result.size() - 1);
}