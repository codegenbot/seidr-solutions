using namespace std;

string get_closest_vowel(string word){
    int n = word.size();
    string closestVowel = "";
    
    for(int i=n-1; i>0; --i){
        if(!isalpha(word[i])) continue;
        if(isvowel(tolower(word[i]))){
            return string(1, tolower(word[i]));
        }
        while(i > 0 && !isalpha(word[i-1])){
            i--;
        }
        if(isvowel(tolower(word[i-1]))){
            closestVowel = string(1, tolower(word[i-1]));
            break;
        }
    }
    
    return closestVowel.empty() ? "No Vowels Found" : closestVowel;
}

int main(){
    cout << get_closest_vowel("Above") << endl;
}