#include<string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            count++;
        }
        else {
            bool isPrime = true;
            int len = 1;
            for (int j = 2; j * j <= strlen(&sentence[i]); j++) {
                if (strlen(&sentence[i]) % j == 0) {
                    isPrime = false;
                    break;
                }
            len++;
            }
            if (isPrime) {
                result += &sentence[i] + " ";
                count = 0;
            }
        }
    }
    return result.substr(0, result.size() - 1);
}