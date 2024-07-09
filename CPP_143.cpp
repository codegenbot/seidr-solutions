#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int i = 0;
    while (i < sentence.size()) {
        int j = i + 1;
        while (j <= sentence.size() && !isalpha(sentence[j])) {
            j++;
        }
        if (j - i > 2 && isPrime(j - i)) {
            result += sentence.substr(i, j - i) + " ";
        }
        i = j;
    }
    return result.substr(0, result.size() - 1);
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}