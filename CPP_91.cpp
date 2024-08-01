#include <string>

int is_bored(std::string S){
    int count = 0;
    bool bored = false;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            bored = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && bored) {
            bored = false;
            count++;
        }
    }
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
}