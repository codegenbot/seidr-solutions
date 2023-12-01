#include <string>
#include <vector>
using namespace std;

string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(string word : words){
        int uniqueChars = 0;
        bool charCount[26] = {false};
        
        for(char c : word){
            if(!charCount[c - 'a']){
                charCount[c - 'a'] = true;
                uniqueChars++;
            }
        }
        
        if(uniqueChars > maxUniqueChars){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
        else if(uniqueChars == maxUniqueChars){
            maxWord = min(maxWord, word);
        }
    }
    
    return maxWord;
}