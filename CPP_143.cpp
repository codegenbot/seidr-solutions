#include <string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int wordCount = 0;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            wordCount++;
        }
    }
    wordCount++; // Count the last word
    
    for (int i = 0; i < sentence.length(); i++) {
        if (i > 0 && sentence[i] == ' ') {
            result += '\n';
        } else {
            int j = i;
            while (sentence[j] != ' ' && j < sentence.length()) {
                j++;
            }
            string word = sentence.substr(i, j - i);
            
            bool isPrime = true;
            for (int k = 2; k * k <=stoi(word); k++) {
                if (stoi(word) % k == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                result += word + " ";
            }
        }
    }
    
    return result;
}