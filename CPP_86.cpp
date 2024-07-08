#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        } else {
            string temp = "";
            int j=i;
            while(j <= s.find(' ', i) && s[j] != ' '){
                temp += s[j];
                j++;
            }
            sort(temp.begin(), temp.end());
            for(int k=0; k<temp.length(); k++){
                result += temp[k];
            }
            i = j-1;
        }
    }
    return result;
}

int main(){
    assert (anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
}