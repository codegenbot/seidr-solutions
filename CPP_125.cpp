#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    
    size_t pos = 0;
    string token;
    
    while ((pos = txt.find(' ')) != string::npos) {
        token = txt.substr(0, pos);
        result.push_back(token);
        txt.erase(0, pos + 1);
    }
    
    if (txt.length() > 0) {
        result.push_back(txt);
    } else {
        int count = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            if ((c - 'a') % 2 != 0) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}

int main() {
    string txt;
    cout << "Enter a text: ";
    getline(cin, txt);
    vector<string> words = split_words(txt);
    for (const auto& word : words) {
        cout << word << endl;
    }
    return 0;
}