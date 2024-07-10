#include <iostream>
#include <string>

int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I";
    size_t pos = 0;
    while((pos = S.find(boredom, pos)) != std::string::npos){
        if(pos == 0 || S[pos-1] == '.' || S[pos-1] == '?' || S[pos-1] == '!'){
            count++;
        }
        pos += boredom.length();
    }
    return count;
}