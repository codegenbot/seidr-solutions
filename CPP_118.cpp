#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word){
    int n = word.length();
    for(int i=n-1; i>=1; --i){
        if(isvowel(word[i])){
            string temp = "";
            for(int j=i-1; j>=0; --j){
                if(!isvowel(word[j])){ 
                    temp = word[j] + temp;
                } else {
                    return temp.empty() ? "" : (temp.size() < 2 ? temp : temp.substr(0, 1));
                }
            }
        }
    }
    return "";
}

bool isvowel(char c){
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}