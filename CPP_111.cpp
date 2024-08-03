#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;
    
    string word;
    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                if (result.find(word[0]) == result.end() || result[word[0]] == 1)
                    result[word[0]] = 1;
                else
                    result[word[0]]++;
                word.clear();
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        if (result.find(word[0]) == result.end() || result[word[0]] == 1)
            result[word[0]] = 1;
        else
            result[word[0]]++;
    }
    
    int maxCount = 0;
    for (auto p : result) {
        if (p.second > maxCount) maxCount = p.second;
    }
    
    map<char, int> mostFrequent;
    for (auto p : result) {
        if (p.second == maxCount)
            mostFrequent[p.first] = p.second;
    }
    
    return mostFrequent;
}