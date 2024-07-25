#include <string>
using namespace std;

int is_bored(std::string S){
    int count = 0;
    bool is_boredom = false;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_boredom = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_boredom) {
            count++;
            is_boredom = false;
        }
    }
    return count;
}

int main() {
    assert(is_bored("I am bored. Are you bored? Let's do something!")==2);
    return 0;
}