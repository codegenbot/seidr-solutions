#include <string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int wordCount = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            continue;
        }
        bool isPrime = true;
        int wordLength = 1;
        while (i + wordLength <= sentence.length() && sentence[i + wordLength] != ' ') {
            wordLength++;
        }
        string word = sentence.substr(i, wordLength);
        i += wordLength - 1;
        for (int j = 2; j * j <= wordLength; j++) {
            if (wordLength % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            result += word + " ";
            wordCount++;
        }
    }
    return result.substr(0, result.length() - 1);
}