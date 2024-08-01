#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while (pos != string::npos) {
        pos = txt.find(' ', prev_pos);
        
        if (pos == string::npos) {
            // no space found, check for commas
            pos = txt.find(',', prev_pos);
            
            if (pos == string::npos) {
                // no commas found, count odd order lower-case letters
                int count = 0;
                for (char c : txt.substr(prev_pos)) {
                    if (islower(c) && (c - 'a') % 2 != 0) {
                        count++;
                    }
                }
                
                result.push_back(to_string(count));
                break;
            }
        }
        
        string word = txt.substr(prev_pos, pos - prev_pos);
        result.push_back(word);
        
        prev_pos = pos + 1;
    }
    
    return result;
}

int main() {
    // test cases
    cout << "{ \"";
    for (string s : split_words("Hello world!")) {
        cout << s << " ";
    }
    cout << "\"}" << endl;

    cout << "{ \"";
    for (string s : split_words("Hello,world!")) {
        cout << s << " ";
    }
    cout << "\"}" << endl;

    cout << "{ \"";
    for (string s : split_words("abcdef")) {
        cout << s << " ";
    }
    cout << "\"}" << endl;
    
    return 0;
}