#include <string>
#include <cmath>

bool is_prime(int num){
    if(num <= 1) return false;
    for(int i=2; i*i<=num; i++){
        if(num % i == 0) return false;
    }
    return true;
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