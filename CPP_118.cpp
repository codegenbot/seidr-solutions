#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int n = word.size();
    string closestVowel = "";
    
    for(int i = 0; i < n; i++) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
           word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
           word[i] == 'U') {
            closestVowel = string(1, tolower(word[i]));
            break;
        }
    }
    
    if(closestVowel.empty()) {
        return "No vowel found";
    }
    
    return closestVowel;
}