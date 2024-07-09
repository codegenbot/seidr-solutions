#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while (pos != string::npos) {
        pos = txt.find(' ');
        if (pos == string::npos) {
            // No whitespace found
            for (char c : txt) {
                if (c >= 'a' && c <= 'z') {
                    result.push_back(to_string(c - 'a'));
                }
            }
            return result;
        } else {
            string word = txt.substr(prev_pos, pos - prev_pos);
            result.push_back(word);
            prev_pos = pos + 1;
        }
    }
    
    // Split on commas
    while (pos != string::npos) {
        pos = txt.find(',');
        if (pos == string::npos) {
            break;
        } else {
            string word = txt.substr(prev_pos, pos - prev_pos);
            result.push_back(word);
            prev_pos = pos + 1;
        }
    }
    
    // Last word
    result.push_back(txt.substr(prev_pos));
    
    return result;
}