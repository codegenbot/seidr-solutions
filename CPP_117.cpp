#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

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

int main() {
    vector<string> words = select_words("Hello world, how are you today?", 2);
    vector<string> expected = {"Hello", "world,", "how", "you"};
    assert(areSame(words, expected));
    
    words = select_words("This is a test", 1);
    expected = {"This", "is"};
    assert(areSame(words, expected));
    
    words = select_words("No words here", 0);
    expected = {};
    assert(areSame(words, expected));
    
    cout << "All test cases passed!" << endl;
    
    return 0;
}