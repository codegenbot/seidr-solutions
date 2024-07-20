#include<string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int i = 0;
    while (i < sentence.size()) {
        int j = i + 1;
        while (j <= sentence.size() && !ispunct(sentence[j])) j++;
        if (j - i > 1) {
            string word = sentence.substr(i, j - i);
            bool is_prime = true;
            for (int k = 2; k * k <= word.size(); k++) {
                if (word.size() % k == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime)
                result += word + " ";
        }
        i = j;
    }
    return result.substr(0, result.size() - 1);
}

bool isprime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}