#include <string>
#include <cctype>

int digitSum(const std::string& s){
    int sum = 0;
    for(char c : s){
        if(std::isalpha(c) || std::isdigit(c)){
            if(std::isalpha(c)){
                if(std::isupper(c)){
                    sum += c - 'A' + 1;
                } else {
                    sum += c - 'a' + 1;
                }
            } else {
                sum += c - '0';
            }
        } else {
            return -1; // Invalid input, return -1
        }
    }
    return sum;
}