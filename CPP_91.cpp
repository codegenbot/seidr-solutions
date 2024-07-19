#include <string>
using namespace std;

int is_bored(string S){
    int count = 0;
    for (size_t i = 0; i < S.size(); ++i) {
        if ((i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!') && S[i] == 'I') {
            count++;
        }
    }
    return count;
}