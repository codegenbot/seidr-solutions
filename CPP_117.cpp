#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include <map>

using namespace std;

bool issame(vector<pair<int, string>> a, vector<pair<int, string>> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<pair<int, string>> select_words(string s, int n) {
    vector<pair<int, string>> result;
    string word = "";
    bool isVowel = false;
    
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int vowelCount = 0;
                for(char i: word)
                {
                    if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
                       (i >= 'A' && i <= 'U') ) 
                        vowelCount++;
                }
                if (vowelCount <= n) {
                    result.push_back({vowelCount, word});
                }
                word = "";
            }
        } else {
            bool isUpper = c >= 'A' && c <= 'Z';
            char cLower = tolower(c);
            if (isUpper)
                c = cLower;
            if ((cLower == 'a' || cLower == 'e' || cLower == 'i' || cLower == 'o' || cLower == 'u')) {
                isVowel = true;
            } else
                isVowel = false;
            word += c;
        }
    }
    
    if (!word.empty()) {
        int vowelCount = 0;
        for(char i: word)
        {
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
               (i >= 'A' && i <= 'U') ) 
                vowelCount++;
        }
        if (vowelCount <= n) {
            result.push_back({vowelCount, word});
        }
    }
    
    return result;
}

int main() {
    vector<pair<int, string>> expected = {{1, "b"}, {1, "c"}, {1, "d"}, {1, "f"}};
    vector<pair<int, string>> output = select_words("a b c d e f", 1);
    assert(issame(output, expected));
    return 0;
}