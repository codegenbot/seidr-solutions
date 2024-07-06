#include <cassert>

int is_bored(string S) {
    int count = 0;
    for(int i=0; i<S.length(); i++){
        if(S[i] == 'I' && (S[i+1] == '.' || S[i+1] == '?' || S[i+1] == '!')){
            count++;
        }
    }
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    return 0;
}