#include <string>

std::string words_in_sentence(std::string sentence){

    std::string result = "";
    int n = sentence.length();
    int i = 0;

    while(i < n){

        // Find the start and end index of a word
        int start = i;
        int end = i;

        while(end < n && sentence[end] != ' '){
            end++;
        }

        // Check if the length of the word is prime
        int length = end - start;
        bool isPrime = true;

        if(length <= 1){
            isPrime = false;
        }
        else{
            for(int j = 2; j * j <= length; j++){
                if(length % j == 0){
                    isPrime = false;
                    break;
                }
            }
        }

        // If the length is prime, add the word to the result string
        if(isPrime){
            result += sentence.substr(start, length) + " ";
        }

        // Move to the next word
        i = end + 1;
    }

    // Remove the trailing space
    if(result.length() > 0){
        result.pop_back();
    }

    return result;
}