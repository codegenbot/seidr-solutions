#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool is_same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    return a == b;
}

vector<string> select_words(string s, int n){
    vector<string> result;
    string word = "";
    int consonantCount = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }
    
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    // Test is_same function
    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b = {"banana", "cherry", "apple"};
    
    assert(is_same(a, b) == true);
    
    return 0;
}