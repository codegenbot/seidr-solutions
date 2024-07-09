#include <iostream>
#include <vector>
#include <string>
#include <sstream>
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
    if(a.size() != b.size())
        return false;
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}