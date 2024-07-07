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
        if (j - i > 2) { // check if the length is prime
            bool isPrime = true;
            for (int k = 2; k * k <= j - i; k++) {
                if ((j - i) % k == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                result += sentence.substr(i, j - i) + " ";
            }
        }
        i = j;
    }
    return result;
}