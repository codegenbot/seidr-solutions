#include <string>
#include <cassert>

int is_bored(std::string S){
    int count = 0;
    bool is_sentence_start = true;
    
    for(int i=0; i<S.length(); i++){
        if(is_sentence_start && S[i] == 'I'){
            count++;
        }
        
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            is_sentence_start = true;
        }
        else{
            is_sentence_start = false;
        }
    }
    
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    // Add your additional test cases here

    return 0;
}