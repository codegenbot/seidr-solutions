#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int primeCount = 0;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            continue;
        }
        
        string word = "";
        while (i < sentence.length() && sentence[i] != ' ') {
            word += sentence[i];
            i++;
        }
        
        int length = word.length();
        bool isPrime = true;
        
        for (int j = 2; j * j <= length; j++) {
            if (length % j == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            result += word + " ";
            primeCount++;
        }
    }
    
    return result.substr(0, result.length() - 1);
}