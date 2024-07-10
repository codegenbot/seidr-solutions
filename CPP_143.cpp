#include <string>
#include <vector>

std::string words_in_sentence(std::string sentence);

int main() {
    assert(words_in_sentence("here is") == "is");
    return 0;
}

std::string words_in_sentence(std::string sentence) {
    std::vector<std::string> words = split(sentence, ' ');
    std::string result;
    
    for (int i = 0; i < words.size(); i++) {
        if (is_prime(words[i].length())) {
            result += words[i] + " ";
        }
    }
    
    return result;
}