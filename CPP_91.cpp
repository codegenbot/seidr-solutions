#include <string>

int is_bored(std::string S){
    int count = 0;
    bool startOfSentence = true;

    for(int i = 0; i < S.length(); i++){
        if(startOfSentence && S[i] == 'I'){
            count++;
            startOfSentence = false;
        }

        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            startOfSentence = true;
        }
    }

    return count;
}