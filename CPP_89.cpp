#include <iostream>
#include <string>

using namespace std;

string encrypt(string s); 

string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            if(isupper(s[i])){
                result += char((s[i]-'A'+2*2)%26+'A');
            }
            else{
                result += char((s[i]-'a'+2*2)%26+'a');
            }
        }
        else{
            result += s[i];
        }
    }
    return result;
}

int main(){
    assert(encrypt("a")=="e");
    // Add more test cases here to verify the correctness of your code
    
    return 0;
}