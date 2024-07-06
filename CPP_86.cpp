#include<string>
#include<algorithm>
using namespace std;

string anti_shuffle(string s){
    string result = "";
    string word;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || i == s.length()-1){
            if(i < s.length()-1) result += s.substr(0, i);
            if(word.length() > 0) {
                sort(word.begin(), word.end());
                result += string(1, word[0]);
                for(int j=1; j<word.length(); j++){
                    result += word[j];
                }
                word.clear();
            }
            if(i < s.length()-1) result += " ";
        } else {
            word += s[i];
        }
    }
    return result;
}