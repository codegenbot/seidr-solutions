#include <string>

int digitSum(const std::string& s){
    int sum = 0;
    for(char c : s){
        if(std::isupper(c)){
            sum += c - 'A' + 1;
        }
    }
    return sum;
}