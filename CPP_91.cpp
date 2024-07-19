#include <string>

int is_bored(std::string S){
    int boredom_count = 0;
    bool is_boredom = false;
    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_boredom = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_boredom) {
            boredom_count++;
            is_boredom = false;
        }
    }
    return boredom_count;
}