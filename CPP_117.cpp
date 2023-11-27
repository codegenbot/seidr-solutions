#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

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

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> output = select_words("Hello there, how are you doing today?", 3);
    vector<string> expected = {"Hello", "there,", "doing"};
    
    assert(areSame(output, expected));
    
    cout << "Test passed!" << endl;
    
    return 0;
}