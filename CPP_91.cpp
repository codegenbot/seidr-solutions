```cpp
int is_bored(std::string S){
    int count = 0;
    std::string word;
    for(size_t i = 0; i < S.size(); ++i) {
        if(S[i] == '.' || S[i] == '?' || S[i] == '!') {
            if(word.size() && (word[0] == 'I' || !word.empty()))
                ++count;
            word.clear();
        } else {
            word += S[i];
        }
    }
    if(word.size() && (word[0] == 'I' || !word.empty()))
        ++count;
    return count;