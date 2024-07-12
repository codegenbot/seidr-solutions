#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int count_distinct_characters(string str) {
    vector<char> charSet;
    
    for (char c : str) {
        if (!islower(c)) c = tolower(c);
        auto it = find(charSet.begin(), charSet.end(), c);
        
        if (it == charSet.end()) {
            charSet.push_back(c);
        }
    }
    
    return charSet.size();
}