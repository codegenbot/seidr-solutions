#include <string>
#include <cmath>

string words_in_sentence(string sentence){
    string result = "";
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] != ' ') {
            int len = 1;
            while(i+1 < sentence.size() && sentence[i+1] != ' ') {
                i++;
                len++;
            }
            string word = sentence.substr(i-len+1, len);
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