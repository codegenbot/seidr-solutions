#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    istringstream iss(s);
    string word;
    while (getline(iss, word, ' ')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    return words;
}