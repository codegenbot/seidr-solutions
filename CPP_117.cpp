#include <vector>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

bool is_consonant(char c) {
    c = tolower(c);
    return c >= 'a' && c <= 'z' && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int count_consonants(const string &word) {
    int count = 0;
    for(char c : word) {
        if(is_consonant(c)) {
            count++;
        }
    }
    return count;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    istringstream iss(s);
    string word;
    while(iss >> word) {
        if(count_consonants(word) == n) {
            result.push_back(word);
        }
    }
    return result;
}