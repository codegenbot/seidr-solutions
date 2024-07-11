#include <string>

int digitSum(const string& s){
    int sum = 0;
    for(char c : s){
        if(isupper(c)){
            sum += c - 'A' + 1;
        }
    }
    return sum;
}