```cpp
#include <string>

int is_bored(std::string S){
    int count = 0;
    std::string word;
    for(int i=0; i<S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(word.length() > 0 && word[0] == 'I')
                count++;
            word.clear();
        } else {
            word += S[i];
        }
    }
    if(word.length() > 0 && word[0] == 'I')
        count++;
    return count;
}