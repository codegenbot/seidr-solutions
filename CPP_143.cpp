#include <string>
#include <cmath>
#include <cassert>

using namespace std;

bool isPrime(int n){ 
    if(n <= 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    int wordLength = 0;
    
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] != ' '){
            word += sentence[i];
            wordLength++;
        }
        else{
            if(isPrime(wordLength)){
                result += word + " ";
            }
            word = "";
            wordLength = 0;
        }
    }
    
    if(isPrime(wordLength)){
        result += word;
    }
    
    return result;
}