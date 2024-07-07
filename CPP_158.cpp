#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string find_max(vector<string> words) {
    string max = words[0];
    int maxUniqueChars = 0;
    
    for (const auto& word : words) {
        int uniqueChars = 0;
        set<char> charSet(word.begin(), word.end());
        
        if (charSet.size() > maxUniqueChars) {
            maxUniqueChars = charSet.size();
            max = word;
        } else if (charSet.size() == maxUniqueChars) {
            if (word < max) {
                max = word;
            }
        }
    }
    
    return max;
}