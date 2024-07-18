#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    string word;
    stringstream ss(s);

    while (getline(ss, word, ' ')) {
        size_t pos = word.find(',');
        if (pos != string::npos) {
            word.erase(pos, 1);
        }
        words.push_back(word);
    }

    return words;
}