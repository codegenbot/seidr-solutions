#include <string>
using namespace std;

int is_bored(string S) {
    int bored = 0;
    size_t pos = 0;
    
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S.substr(pos).find_first_of(".!?") == string::npos)
            bored++;
        pos++;
    }
    
    return bored;
}