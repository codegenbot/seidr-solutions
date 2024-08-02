#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    istringstream ss(s);
    string word;
    
    while (getline(ss, word, ' ')) {
        result.push_back(word);
    }
    
    return result;
}