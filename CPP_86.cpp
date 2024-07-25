#include <iostream>
#include <algorithm>

string anti_shuffle(string s) {
    string result = "";
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    sort(word.begin(), word.end());
    result += word;
    return result;
}

int main() {
    // Test cases
    string input1 = "hello world";
    string input2 = "cpp code";
    
    cout << anti_shuffle(input1) << endl;
    cout << anti_shuffle(input2) << endl;
    
    return 0;
}