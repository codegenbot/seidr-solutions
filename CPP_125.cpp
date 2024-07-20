#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    
    for (char c : txt) {
        if (c == ' ') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty())
        result.push_back(word);
    
    if (result.empty()) {
        int count = 0;
        for (char c = 'a'; c <= 'z'; ++c) {
            if (txt.find(c) != string::npos)
                count++;
        }
        result.push_back(to_string(count));
    }
    
    return result;
}