#include <string>

bool is_prime(int num){
    if(num < 2)
        return false;
    for(int i=2; i*i<=num; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            if (is_prime(word.size())) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (is_prime(word.size())) {
        result += word;
    }
    return result;
}