#include <cassert>
#include <string>

int digitSum(std::string s);

int digitSum(std::string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c)){
            sum += c - 'A' + 1;
        }
    }
    return sum;
}

assert(digitSum("AaBbCc") == 6);
assert(digitSum("HELLO") == 52);