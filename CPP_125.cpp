#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    
    // Separate words by commas
    while ((pos = txt.find(',')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (!txt.empty()) {
        // Count consecutive alphabets after the last word
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
            } else {
                if (count > 1)
                    result.push_back(to_string(count));
                count = 0;
            }
        }
        // Add the last sequence of alphabets
        if (count > 1)
            result.push_back(to_string(count));
    }

    return result;
}