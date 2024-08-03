#include <iostream>
#include <string>
#include <cassert>

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    int len = sentence.length();
    int word_start = 0;
    for (int i = 0; i < len; i++){
        if (i == len - 1 || sentence[i] == ' '){
            std::string word = sentence.substr(word_start, i - word_start);
            int word_len = word.length();
            bool is_prime = true;
            for (int j = 2; j*j <= word_len; j++){
                if (word_len % j == 0){
                    is_prime = false;
                    break;
                }
            }
            if (word_len > 1 && is_prime){
                result += word + " ";
            }
            word_start = i + 1;
        }
    }
    if (!result.empty()){
        result.pop_back(); // remove extra space at the end
    }
    return result;
}

int main(){
    assert (words_in_sentence("here is") == "is");
    return 0;
}