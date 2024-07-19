#include <cctype>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string currentWord = "";
    
    for (char c : txt) {
        if (!isspace(c)) {
            currentWord += c;
        } else if (!currentWord.empty()) {
            result.push_back(currentWord);
            currentWord = "";
        }
    }
    
    if (!currentWord.empty()) {
        result.push_back(currentWord);
    } else {
        int count = 0;
        for (char c = 'a'; c <= 'z'; ++c) {
            if (std::count(txt.begin(), txt.end(), c) % 2 != 0) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}