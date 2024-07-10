#include <string>
#include <vector>

using namespace std;

std::string words_in_sentence(std::string sentence) {
    vector<std::string> words = split(sentence, ' ');
    std::string result;
    
    for (int i = 0; i < words.size(); i++) {
        if (is_prime(words[i].length())) {
            result += words[i] + " ";
        }
    }
    
    return result.substr(0, result.length() - 1);
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> split(std::string sentence, char delimiter) {
    std::vector<std::string> result;
    std::string temp;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == delimiter) {
            result.push_back(temp);
            temp = "";
        } else {
            temp += sentence[i];
        }
    }

    result.push_back(temp);

    return result;
}