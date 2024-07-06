#include <iostream>
#include <sstream>
using namespace std;

string anti_shuffle(string s) {
    istringstream iss(s);
    string word;
    string result = "";
    
    while (iss >> word) {
        for (char c : word) {
            result += c;
        }
        for (int i = 0; i < word.length(); ++i) {
            if (word[i] != ' ') {
                int j = i + 1;
                while (j < word.length() && word[j] <= word[i]) {
                    ++j;
                }
                for (; i < j; ++i) {
                    result += word[i];
                }
                i = j - 1;
            } else {
                result += ' ';
            }
        }
    }
    
    return result;
}

int main() {
    cout << anti_shuffle("Hi") << endl;
    cout << anti_shuffle("hello") << endl;
    cout << anti_shuffle("Hello World!!!") << endl;
    return 0;
}