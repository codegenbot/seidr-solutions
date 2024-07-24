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
            // Split on commas
            if (txt[0] == ',') {
                result.push_back(txt.substr(1));
                txt.erase(0, 1);
                prevPos = 0;
            } else {
                break;
            }
        }
        
        size_t word = txt.find_first_not_of(" ,", prevPos);
        if (word != string::npos) {
            result.push_back(txt.substr(prevPos, word - prevPos));
            prevPos = word + 1;
        } else {
            result.push_back(txt.substr(prevPos));
            break;
        }
    }
    
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
                if ((int)c % 2 != 0) {
                    result.push_back(to_string(count));
                    break;
                }
            }
        }
    }
    
    return result;
}