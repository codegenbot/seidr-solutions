#include <iostream>
#include <string>
#include <cmath>

bool is_prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

std::string words_in_sentence(std::string sentence);

int main(){
    std::string test_sentence = "The quick brown fox jumps over the lazy dog";
    std::cout << words_in_sentence(test_sentence) << std::endl;
    return 0;
}

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    std::string word = "";
    for(char c : sentence){
        if(c == ' '){
            if(is_prime(word.length())){
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if(is_prime(word.length())){
        result += word;
    }
    return result;
}