#include <string>
using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            count++;
        } else {
            i++;
        }
    }
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] != ' ') {
            if (is_prime(sentence.substr(count, i-count).size())) {
                result += sentence.substr(count, i-count) + " ";
            }
            count = i;
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