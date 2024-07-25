using namespace std;

string get_closest_vowel(string word){
    int n = word.size();
    string closestVowel = "";
    
    for(int i=n-1; i>=0; --i){
        if(!isalpha(word[i])) continue;
        char c = tolower(word[i]);
        
        if(isvowel(c)){
            return string(1, c);
        }
        while(i > 0 && !isalpha(word[i-1])){
            i--;
        }
        if(isvowel(tolower(word[i-1]))){
            closestVowel = to_string(word[i-1]);
            break;
        }
    }
    
    if(closestVowel == "")
        return string(1, 'a');
    else
        return closestVowel;