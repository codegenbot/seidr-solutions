#include <string>

int count_upper(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if((s[i] >= 'A' && s[i] <= 'U') && (i % 2 == 1 || s[i] >= 'E')){
            count++;
        }
    }
    return count;
}