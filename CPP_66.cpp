#include <string>
#include <cctype>

int digitSum(std::string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c)){
            sum += c;
        }
    }
    return sum;
}

assert(digitSum("You arE Very Smart") == 327);