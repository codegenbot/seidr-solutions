```
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            int j = i;
            while (j < s.length() && s[j] != ' ') {
                word += s[j];
                j++;
            }
            char temp;
            for (int k = 0; k < word.length(); k++) {
                temp = word[k];
                for (int l = 0; l < word.length() - k - 1; l++) {
                    if (temp > word[l]) {
                        temp = word[l];
                    }
                }
            }
            for(int i = 0; i < word.length(); i++){
                result += temp;
            }
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    if(str.empty()) {
        cout << "Error: Please enter a valid sentence." << endl;
    } else {
        cout << "Anti-shuffled sentence: " << anti_shuffle(str) << endl;
    }
    return 0;
}