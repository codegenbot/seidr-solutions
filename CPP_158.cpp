```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string find_max(vector<string> words);

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}

string find_max(vector<string> words) {
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for (string word : words) {
        int uniqueChars = 0;
        vector<char> seenChars;
        
        for (char c : word) {
            if (find(seenChars.begin(), seenChars.end(), c) == seenChars.end()) {
                seenChars.push_back(c);
                uniqueChars++;
            }
        }
        
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }
    
    return maxWord;
}
```