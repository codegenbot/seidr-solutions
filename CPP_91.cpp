#include <string>

int is_bored(string S){
    int bored_count = 0;
    size_t start = 0;
    while (start < S.size()) {
        size_t end = S.find('.', start);
        if (end == string::npos) {
            end = S.find('?', start);
            if (end == string::npos) {
                end = S.find('!', start);
                if (end == string::npos) break;
            }
        }
        if (S.substr(start, end - start).find("I") != string::npos)
            bored_count++;
        start = end + 1;
    }
    return bored_count;