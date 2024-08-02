#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c) && strchr("aeiouAEIOU", c) == NULL) {
            consonant_count++;
        }
        word += c;
    }
    
    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Main program logic here
    return 0;
}