#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

std::vector<std::string> words_in_sentence(std::string sentence) {
    if (sentence.empty()) {
        return {};
    }
    vector<string> wordLengths; 
    string result = "";

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
                result += word + " ";
                wordLengths.push_back(to_string(length));
            }
        }
    }

    return wordLengths; 
}

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    stringstream ss(str);
    string token;

    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}