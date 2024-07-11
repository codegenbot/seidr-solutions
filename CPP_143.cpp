#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;
    for (string word : words) {
        if (isPrime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(string sentence, char c) {
    vector<string> words;
    string temp = "";
    for (char ch : sentence) {
        if (ch == c) {
            words.push_back(temp);
            temp = "";
        } else {
            temp += ch;
        }
    }
    words.push_back(temp);
    return words;
}