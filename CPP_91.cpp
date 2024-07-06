#include <string>

int is_bored(string S){
    int count = 0;
    string word;
    for(size_t i = 0; i < S.size(); ++i) {
        if(S[i] == '.' || S[i] == '?' || S[i] == '!') {
            if(word.size() && word[0] == 'I')
                ++count;
            word.clear();
        } else {
            word += S[i];
        }
    }
    if(word.size() && word[0] == 'I')
        ++count;
    return count;
}