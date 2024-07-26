#include <string>

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    std::string word = "";
    for(char c : sentence){
        if(c != ' '){
            word += c;
        } else {
            int len = word.size();
            bool is_prime = true;
            if(len <= 1){
                is_prime = false;
            } else {
                for(int i=2; i*i<=len; i++){
                    if(len % i == 0){
                        is_prime = false;
                        break;
                    }
                }
            }
            if(is_prime){
                result += word + " ";
            }
            word = "";
        }
    }
    int len = word.size();
    bool is_prime = true;
    if(len <= 1){
        is_prime = false;
    } else {
        for(int i=2; i*i<=len; i++){
            if(len % i == 0){
                is_prime = false;
                break;
            }
        }
    }
    if(is_prime){
        result += word;
    }
    return result;
}