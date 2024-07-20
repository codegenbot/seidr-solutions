#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;
    
    for (string word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    
    return result.substr(0, result.size() - 1);
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<string> split(string sentence, char delimiter) {
    vector<string> result;
    string temp;

    for (char c : sentence) {
        if (c != delimiter) {
            temp += c;
        } else {
            result.push_back(temp);
            temp = "";
        }
    }

    result.push_back(temp);

    return result;
}