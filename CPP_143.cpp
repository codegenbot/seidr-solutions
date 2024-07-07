#include <vector>
#include <algorithm>
#include <string>

std::string words_in_sentence(std::string sentence) {
    std::vector<int> wordLengths;
    std::string result = "";
    
    for (const auto& word : split(sentence, ' ')) {
        int length = word.length();
        bool isPrime = true;
        
        if (length > 1) {
            for (int i = 2; i * i <= length; ++i) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) {
                wordLengths.push_back(length);
            }
        }
    }
    
    return std::to_string(std::accumulate(wordLengths.begin(), wordLengths.end(), 0) > 0 ? "Prime words: " : "") + 
           std::join(wordLengths, " ");
}