#include <string>

int is_bored(std::string S);

int is_bored(std::string S){
    int count = 0;
    bool isI = false;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            isI = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && isI) {
            count++;
            isI = false;
        }
    }
    return count;
}

int main() {
    std::assert(is_bored("You and I are going for a walk") == 0);
    return 0;
}