#include <iostream>
#include <string>
#include <cmath>

std::string words_in_sentence(std::string sentence);
bool is_prime(int num);

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::cout << words_in_sentence(sentence) << std::endl;

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

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}