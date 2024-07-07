#include<string>

string words_in_sentence(string sentence) {
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            count++;
        } else {
            count = 0;
        }
        if (count == 0) {
            int len = 0;
            while (i < sentence.length() && sentence[i] != ' ') {
                i++;
                len++;
            }
            string word = sentence.substr(0, len);
            bool is_prime = true;
            for (int j = 2; j * j <= len; j++) {
                if (len % j == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime) {
                result += word + " ";
            }
        }
    }
    return result.substr(0, result.length() - 1);
}