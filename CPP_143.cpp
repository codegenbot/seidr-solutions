#include <string>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int words_in_sentence(string sentence){
    int result = 0;
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
                result++;
            }
            count = i;
        }
    }
    return result;
}