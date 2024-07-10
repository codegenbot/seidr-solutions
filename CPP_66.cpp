#include <string>

int digitSum(const std::string& s){
    int sum = 0;
    for(char c : s){
        if(std::isalpha(c)){
            sum += std::toupper(c) - 'A' + 1;
        }
    }
    return sum;
}