#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;
    
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            // Split on commas if no whitespace exists
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
            prevPos = 0;
        } else if (prevPos == 0) {
            // Split on whitespace if no commas exists
            result.push_back(txt.substr(prevPos, pos - prevPos));
            txt.erase(pos, txt.length());
            break;
        }
        
        prevPos = pos + 1;
    }
    
    if (txt.empty()) {
        // If no whitespaces or commas exist, count lower-case letters with odd order in the alphabet
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                if ((int)c - ord('a') % 2 == 1) {
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    } else {
        // Add the remaining string to the result
        result.push_back(txt);
    }
    
    return result;
}