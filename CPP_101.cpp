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
    string input_str;
    getline(cin, input_str);

    vector<string> input_words = words_string(input_str);

    for (const auto& word : input_words) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}