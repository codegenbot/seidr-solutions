```cpp
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
                result.push_back(currentWord);
                currentWord = "";
            }
        } else if (c == ',') {
            if (!currentWord.empty()) {
                result.push_back(currentWord);
                currentWord = "";
            }
        } else {
            currentWord += c;
        }
    }
    
    if (!currentWord.empty()) {
        result.push_back(currentWord);
    } 

    if (result.size() > 0) {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}