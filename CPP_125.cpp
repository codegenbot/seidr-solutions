#include <cctype>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string currentWord = "";
    
    for (char c : txt) {
        if (isspace(c)) {
            if (!currentWord.empty()) {
                if (currentWord.size() > 0) {
                    result.push_back(currentWord);
                }
                currentWord = "";
            }
        } else if (c == ',') {
            if (!currentWord.empty()) {
                if (currentWord.size() > 0) {
                    result.push_back(currentWord);
                }
                currentWord = "";
            }
        } else {
            currentWord += c;
        }
    }
    
    if (!currentWord.empty()) {
        if (currentWord.size() > 0) {
            result.push_back(currentWord);
        }
    }
    
    return result;
}