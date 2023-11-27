#include <iostream>
#include <vector>
#include <cassert>
#include <string>

using namespace std;

bool areSame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            int consonantCount = 0;
            for (char ch : word) {
                if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
                    ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    
    int consonantCount = 0;
    for (char ch : word) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            consonantCount++;
        }
    }
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

bool areSame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    string input;
    int n;
    cin >> input >> n;
    
    vector<string> selectedWords = select_words(input, n);
    
    vector<string> expectedOutput;
    int wordCount;
    cin >> wordCount;
    for (int i = 0; i < wordCount; i++) {
        string word;
        cin >> word;
        expectedOutput.push_back(word);
    }
    
    assert(areSame(selectedWords, expectedOutput) == true);
    
    return 0;
}