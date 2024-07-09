#include <map>
#include <sstream>

map<char,int> histogram(string test);

bool issame(map<char,int>& a, map<char,int>& b){
    if(a.size() != b.size()) return false;
    for(auto it = a.begin(); it != a.end(); ++it) {
        if(b.find(it->first) == b.end() || b[it->first] != it->second) {
            return false;
        }
    }
    return true;
}

map<char,int> histogram(string test){
    map<char,int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    map<char,int> maxLetters;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxLetters[pair.first] = pair.second;
        }
    }
    return maxLetters;
}