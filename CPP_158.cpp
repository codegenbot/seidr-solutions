#include <map>
#include <algorithm>

string find_max(vector<string> words) {
    map<string, int> uniqueCount;
    
    for (const string& word : words) {
        set<char> s(word.begin(), word.end());
        uniqueCount[word] = s.size();
    }
    
    string maxUniqueWord = *uniqueCount.begin()->first;
    int maxUnique = uniqueCount[maxUniqueWord];
    
    for (const auto& pair : uniqueCount) {
        if (pair.second > maxUnique) {
            maxUnique = pair.second;
            maxUniqueWord = pair.first;
        } else if (pair.second == maxUnique && pair.first < maxUniqueWord) {
            maxUniqueWord = pair.first;
        }
    }
    
    return maxUniqueWord;
}