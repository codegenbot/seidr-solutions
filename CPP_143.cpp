#include <iostream>
#include <string>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    int i = 0;
    while(i < sentence.size()){
        int len = 0;
        for(int j=i; j<sentence.size() && isalpha(sentence[j]); j++) {
            len++;
            i = j;
        }
        if(len > 0) {
            if(isPrime(len)) result += (sentence.substr(i, len) + " ");
        }
        else i++;
    }
    return result;
}

int main(){
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << words_in_sentence(sentence) << "\n";
}