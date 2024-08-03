#include <iostream>
#include <string>

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    int count = 0;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' ' || i == sentence.size() - 1){
            std::string word = sentence.substr(count, i - count);
            bool is_prime = true;
            if(i != sentence.size() - 1)count = i + 1;
            for(int j = 2; j * j <= word.length(); j++){
                if(word.length() % j == 0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime){
                result += word + " ";
            }
        }
    }
    return result;
}