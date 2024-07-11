#include <string>

string words_in_sentence(string sentence);

string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(char c : sentence){
        if(c == ' '){
            if(word.length() > 1){
                bool is_prime = true;
                for(int i=2; i*i <= word.length(); i++){
                    if(word.length() % i == 0){
                        is_prime = false;
                        break;
                    }
                }
                if(is_prime){
                    result += word + " ";
                }
            }
            word = "";
        } else {
            word += c;
        }
    }
    if(word.length() > 1){
        bool is_prime = true;
        for(int i=2; i*i <= word.length(); i++){
            if(word.length() % i == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            result += word;
        }
    }
    return result;
}