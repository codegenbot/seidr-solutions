#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (n == 0) {
                result.push_back(word);
            } else {
                n--;
            }
            word = "";
        } else {
            word += s[i];
        }
    }

    if (n == 0 && !word.empty()) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    vector<string> result = select_words("a b c d e f", 1);
    
    cout << (result == vector<string>{"b", "c", "d", "f"});
    
    return 0;
}