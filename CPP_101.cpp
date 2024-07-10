#include <vector>
#include <string>
#include <sstream>
#include <cassert> // Added missing header

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    return words;
}

int main(){
    assert(words_string("ahmed     , gamal") == vector<string>{"ahmed", "gamal"});

    return 0;
}