#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

std::vector<std::string> split(const std::string& sentence, char delimiter) {
    vector<string> words;
    string word;
    
    for (char c : sentence) {
        if (c != delimiter) {
            word += c;
        } else {
            words.push_back(word);
            word = "";
        }
    }
    
    words.push_back(word);
    
    return words;
}

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;
    
    for (auto word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    
    return result.substr(0, result.size() - 1);
}