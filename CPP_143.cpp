#include <string>
#include <cmath>

string words_in_sentence(string sentence) {
    string result = "";
    int n = sentence.size();
    
    for (int i = 0; i < n; ++i) {
        int word_start = i;
        while (i < n && sentence[i] != ' ') {
            i++;
        }
        int word_end = i;
        string current_word = sentence.substr(word_start, word_end - word_start);
        int word_length = current_word.size();
        
        bool is_prime = true;
        if (word_length <= 1)
            is_prime = false;
        for (int j = 2; j <= sqrt(word_length); ++j) {
            if (word_length % j == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime) {
            result += current_word + " ";
        }
        
        if (i == n)
            break;
    }
    
    // Remove the last space
    if (!result.empty())
        result.pop_back();
    
    return result;
}