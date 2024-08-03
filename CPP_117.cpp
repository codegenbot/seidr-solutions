Here is the corrected code:

```cpp
#include <vector>
#include <string>
#include <cctype>

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i].compare(b[i])!=0)return false;
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            int consonants = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isalpha(ch) || isvowel(ch)) {
                    continue;
                }
                consonants++;
            }
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}