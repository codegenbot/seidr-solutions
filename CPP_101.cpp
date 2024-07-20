#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        if (word.find(',') != string::npos) {
            word.erase(remove(word.begin(), word.end(), ','), word.end());
        }
        words.push_back(word);
    }
    return words;
}

bool are_equal(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(are_equal(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}