#include <string>
using namespace std;

int is_bored(string S){
    int count = 0;
    bool in_sentence = false;

    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            in_sentence = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && in_sentence) {
            count++;
            in_sentence = false;
        }
    }

    return count;
}