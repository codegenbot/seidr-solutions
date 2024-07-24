#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result = {"default"};
    size_t pos = 0, prev_pos = 0;
    
    while (pos != string::npos) {
        pos = txt.find(' ', prev_pos);
        
        if (pos == string::npos) {
            result.push_back(txt.substr(prev_pos));
            break;
        }
        
        if (txt.find(',', pos) == string::npos || pos > txt.find(',')) {
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        } else {
            size_t comma_pos = txt.find(',', pos);
            result.push_back(txt.substr(prev_pos, comma_pos - prev_pos));
            prev_pos = comma_pos + 1;
        }
    }
    
    return result;
}