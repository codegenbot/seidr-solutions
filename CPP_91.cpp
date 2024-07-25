#include <string>

using namespace std;

int is_bored(string S) {
    int count = 0;
    size_t pos = 0;
    
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S.find(".", pos) == string::npos && 
            S.find("?", pos) == string::npos && 
            S.find("!", pos) == string::npos) {
            pos = S.find(".", 0, pos);
            if (pos == string::npos) {
                break;
            }
        } else {
            count++;
            while ((pos = S.find(".", pos)) != string::npos || 
                   (pos = S.find("?", pos)) != string::npos || 
                   (pos = S.find("!", pos)) != string::npos) {
                if (S.find(".", 0, pos) == string::npos && 
                    S.find("?", 0, pos) == string::npos && 
                    S.find("!", 0, pos) == string::npos) {
                    break;
                }
                pos = S.find(".", 0, pos);
                if (pos == string::npos) {
                    break;
                }
            }
        }
    }
    
    return count;
}