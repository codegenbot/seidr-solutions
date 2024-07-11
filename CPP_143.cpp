#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;

    for (string word : words) {
        int length = word.length();
        bool is_prime = false;
        for (int i = 2; i <= sqrt(length); i++) {
            if (length % i == 0) {
                is_prime = false;
                break;
            } else {
                is_prime = true;
            }
        }

        if (is_prime) {
            result += word + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}

vector<string> split(string sentence, char delimeter) {
    vector<string> words;
    string temp;

    for (char c : sentence) {
        if (c == delimeter) {
            words.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }

    words.push_back(temp);

    return words;
}