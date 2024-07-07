#include <string>

using namespace std;

int is_bored(string S) {
    int count = 0;
    string boredom = "I";
    
    size_t pos = 0;
    while ((pos = S.find('.', pos)) != string::npos || 
           (pos = S.find('?', pos)) != string::npos || 
           (pos = S.find('!', pos)) != string::npos) {
        if (S.substr(0, boredom.size()).compare(boredom) == 0) {
            count++;
        }
        pos = max(pos + 1, S.find('.', pos));
    }
    
    return count;
}