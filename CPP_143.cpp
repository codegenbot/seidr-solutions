#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            count++;
        } else {
            i++;
            while (i < sentence.size() && sentence[i] != ' ') {
                i++;
            }
            string word = sentence.substr(count, i - count - 1);
            int len = word.length();
            bool isPrime = true;
            for (int j = 2; j * j <= len; j++) {
                if (len % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                result += word + " ";
            }
            count++;
        }
    }
    return result.substr(0, result.size() - 1);
}