```cpp
#include <string>

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    int i = 0;
    while(i < sentence.size()){
        int j = i + 1;
        while(j <= sentence.size() && !isalpha(sentence[j])){
            j++;
        }
        if(j > i){
            std::string word = sentence.substr(i, j - i);
            bool is_prime = true;
            for(int k = 2; k*k <= stol(word); k++){
                if(stol(word) % k == 0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime)
                result += word + " ";
        }
        i = j;
    }
    return result;
}

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}