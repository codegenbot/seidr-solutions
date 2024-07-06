```cpp
#include <string>

std::string words_in_sentence(std::string sentence){
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

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}