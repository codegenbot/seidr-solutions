#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int i = 0;
    while (i < sentence.size()) {
        int j = i + 1;
        while (j <= sentence.size() && !ispunct(sentence[j])) {
            j++;
        }
        if (j - i > 2) { // Check for words with more than two characters
            string word = sentence.substr(i, j - i);
            bool isPrime = true;
            for (int k = 2; k * k <= stol(word); k++) {
                if (stol(word) % k == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                result += word + " ";
            }
        }
        i = j;
    }
    return result;
}