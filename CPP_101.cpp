#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        size_t pos = word.find(',');
        if (pos != string::npos)
            word.erase(pos, 1);
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    string input;
    cout << "Enter a string with words separated by spaces and commas (,): ";
    getline(cin, input);
    
    vector<string> words = words_string(input);

    cout << "Words extracted from input: ";
    for (const auto &word : words) {
        cout << word << " ";
    }
    
    return 0;
}