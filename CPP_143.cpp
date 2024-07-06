```
#include <iostream>
#include <string>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

std::string words_in_sentence(const std::string& sentence) {
    std::string result = "";
    for(int i=0; i<sentence.size(); i++){
        if(i > 0) result += " ";
        int len = 0;
        for(int j=i; j<sentence.size() && isalpha(sentence[j]); j++) {
            len++;
            i = j;
        }
        if(isPrime(len)) result += sentence.substr(i, len);
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);
    std::cout << words_in_sentence(input) << std::endl;
    return 0;
}