#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        word.erase(std::remove_if(word.begin(), word.end(), [](char c){ return c == ','; }), word.end());
        words.push_back(word);
    }
    return words;
}