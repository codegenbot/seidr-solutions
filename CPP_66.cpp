#include <string>
#include <cctype>

int digitSum(const std::string& s){
    int sum = 0;
    for(char c : s){
        if(std::isalpha(c)){
            if(std::isupper(c)){
                sum += c - 'A' + 1;
            } else {
                sum += c - 'a' + 1;
            }
        } else if(std::isdigit(c)){
            sum += c - '0';
        } else {
            return 0; // Invalid input, return 0
        }
    }
    return sum;
}