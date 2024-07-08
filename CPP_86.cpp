```cpp
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
            int k=i;
            while(k<=s.find(' ',i)){
                temp+=s[k];
                k++;
            }
            sort(temp.begin(), temp.end());
            for(char c : temp){
                result += c;
            }
            i+=temp.length()-1;
        }
    }
    return result;
}

int main(){
    assert (anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
}