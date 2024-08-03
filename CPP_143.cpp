#include <stdio.h>
#include <string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    vector<string> words;
    int n = 0;
    for (char c : sentence) {
        if (c == ' ') {
            n++;
        } else {
            words.push_back(c + "");
        }
    }
    
    for (int i = 0; i <= n; i++) {
        string word = words[i];
        int len = word.length();
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
    
    return result.substr(0, result.length() - 1);
}