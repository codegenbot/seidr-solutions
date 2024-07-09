#include <string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            count++;
        } else {
            if (count == 0) {
                int len = 1;
                while (i + len <= sentence.size() && sentence[i + len] != ' ') {
                    len++;
                }
                string word = sentence.substr(i, len);
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
            } else {
                count--;
            }
        }
    }
    return result.substr(0, result.size() - 1);
}