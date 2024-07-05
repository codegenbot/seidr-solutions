#include<sstream>

vector<string> words_string(string s){
    vector<string> result;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        stringstream ws(word);
        while (getline(ws, word, ',')) {
            result.push_back(word);
        }
    }
    return result;
}