#include <string>
#include <cctype>

int digitSum(const std::string& s){
    int sum = 0;
    for(char c : s){
        if(std::isupper(c)){
            sum += c - 'A' + 1;
        } else if(std::islower(c)){
            sum += c - 'a' + 1;
        } else if(std::isdigit(c)){
            sum += c - '0';
        }
    }
    return sum;
}