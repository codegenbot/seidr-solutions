#include<string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int i = 0;
    while (i < sentence.length()) {
        int j = i + 1;
        while (j <= sentence.length() && !isalpha(sentence[j])) {
            j++;
        }
        if (j - i > 0 && isPrime(j - i)) {
            result += sentence.substr(i, j - i) + " ";
        }
        i = j;
    }
    return result;
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