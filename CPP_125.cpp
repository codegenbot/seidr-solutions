#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while (pos != string::npos) {
        pos = txt.find(' ');
        if (pos == string::npos) {
            pos = txt.find(',');
            if (pos == string::npos) {
                int count = 0;
                for (char c : txt) {
                    if (c >= 'a' && c <= 'z') {
                        if ((count++) % 2 != 0) {
                            result.push_back(to_string(count));
                            return result;
                        }
                    }
                }
                result.push_back(txt);
                return result;
            }
        }
        
        string word = txt.substr(prev_pos, pos - prev_pos);
        if (!word.empty()) {
            result.push_back(word);
        }
        prev_pos = pos + 1;
    }
    
    return result;
}

int main() {
    // Test cases
    cout << "{";
    for (const auto& word : split_words("Hello world!")) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (const auto& word : split_words("Hello,world!")) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (const auto& word : split_words("abcdef")) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;
    
    return 0;
}