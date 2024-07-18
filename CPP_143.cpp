#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;
bool is_prime(int n){
    if(n <= 1) return false;
    for(int i=2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
string words_in_sentence(string sentence){
    string result = "";
    int start = 0;
    for(int i=0; i<=sentence.length(); i++){
        if(i == sentence.length() || sentence[i] == ' '){
            string word = sentence.substr(start, i-start);
            if(is_prime(word.length())){
                result += word + " ";
            }
            start = i + 1;
        }
    }
    if(result.length() > 0) result.pop_back(); // Remove the trailing space
    return result;
}