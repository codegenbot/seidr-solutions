#include <string>

bool is_prime(int n);

string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            if (is_prime(word.size())) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (is_prime(word.size())) {
        result += word;
    }
    return result;
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string input_sentence;
    getline(cin, input_sentence);
    string output = words_in_sentence(input_sentence);
    cout << output << endl;
    return 0;
}