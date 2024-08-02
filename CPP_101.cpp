#include <sstream>
using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    istringstream iss(s);
    string word;
    
    while (iss >> word) {
        result.push_back(word);
    }
    
    return result;
}