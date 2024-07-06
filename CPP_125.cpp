#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    
    size_t start = 0;
    while (start < txt.size()) {
        if (isalpha(txt[start])) {
            start++;
            continue;
        }
        
        size_t end = start;
        while (end < txt.size() && !isalpha(txt[end])) {
            end++;
        }
        
        words.push_back(txt.substr(start, end - start));
        start = end;
    }

    if (words.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count += (int)c - (int)'a';
            }
        }
        words.push_back(to_string(count));
    }
    
    return words;
}

int main() {
    string txt;
    cout << "Enter a text: ";
    getline(cin, txt);
    vector<string> result = split_words(txt);
    for (const auto& word : result) {
        cout << word << endl;
    }
    return 0;
}