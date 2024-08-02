#include <string>
#include <map>
#include <vector>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    vector<string> words = split(test, ' ');
    
    for (const string& word : words) {
        if (!result.count(word[0])) {
            result[word[0]] = 1;
        } else {
            result[word[0]]++;
        }
    }

    return result;
}

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    size_t prev = 0;

    while ((pos = str.find(delimiter, prev)) != string::npos) {
        tokens.push_back(str.substr(prev, pos - prev));
        prev = pos + 1;
    }

    tokens.push_back(str.substr(prev));

    return tokens;
}