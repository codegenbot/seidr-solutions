#include <vector>
#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    
    for(int i=0; i<4; ++i) {
        if(code[i] == guess[i]) {
            ++black;
        } else {
            bool found = false;
            for(int j=0; j<4; ++j) {
                if(code[j] == guess[i] && j != i) {
                    ++white;
                    found = true;
                    break;
                }
            }
            if(!found) {
                int k = 0;
                while(k < 6) {
                    if(count(code.begin(), code.end(), 'A'+k) > 0) {
                        --code[i];
                        ++black;
                        break;
                    } else {
                        ++k;
                    }
                }
            }
        }
    }
    
    return make_pair(white, black).second;
}