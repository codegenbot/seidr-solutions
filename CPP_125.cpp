#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    int start = 0;
    
    for (int i = 0; i <= txt.length(); i++) {
        if ((i == txt.length() || !isalnum(txt[i])) && (i > start)) {
            string word = txt.substr(start, i - start);
            if (!word.empty()) {
                result.push_back(word);
            }
            start = i + 1;
        } else if (i == txt.length() && (start < i)) {
            string word = txt.substr(start, i - start);
            if (!word.empty()) {
                result.push_back(word);
            }
        }
    }
    
    // If no whitespaces and commas exists
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if ((int)c >= (int)'a' && (int)c <= (int)'z') {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);
    vector<string> result = split_words(txt);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}