#include<string>
using namespace std;

string get_closest_vowel(string word){
    int n = word.size();
    for(int i=n-1; i>=0; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            for(int j=i+1; j<n; j++){
                if(isalpha(word[j]) && (word[j] < 'a' || word[j] > 'z')){
                    return string(1, tolower(word[i]));
                }
            }
        }
    }
    return "";
}