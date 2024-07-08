```c++
#include <vector>
#include <cmath>
#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;
    for (const auto& word : words) {
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

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(c)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    string result = words_in_sentence(sentence);
    if (!result.empty()) {
        cout << "The words in the sentence with prime length are: " << result << endl;
    } else {
        cout << "No word has a prime length." << endl;
    }
}