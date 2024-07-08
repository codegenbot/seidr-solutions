```
#include <string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    size_t pos = S.find("I");
    while((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == '.' || S[pos] == '?' || S[pos] == '!') 
            count++;
        pos++;
    }
    return count;