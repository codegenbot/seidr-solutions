```cpp
#include <iostream>
#include <string>

int main() {
    std::string words_in_sentence(std::string sentence){
        std::string result = "";
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] != ' ') {
                int len = 1;
                while(i+1 < sentence.size() && sentence[i+1] != ' ') {
                    i++;
                    len++;
                }
                std::string word = sentence.substr(i-len+1, len);
                bool is_prime = true;
                for(int j = 2; j <= sqrt(len); j++) {
                    if(len % j == 0) {
                        is_prime = false;
                        break;
                    }
                }
                if(is_prime)
                    result += word + " ";
            }
        }
        return result.substr(0, result.size()-1);
    }

    assert(words_in_sentence("here is") == "is");
}