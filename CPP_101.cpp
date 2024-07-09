#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        size_t found = word.find(',');
        if (found != string::npos) {
            word.erase(found, 1);
        }
        words.push_back(word);
    }
    return words;
}