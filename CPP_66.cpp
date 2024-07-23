#include <string>
#include <cctype>

int digitSum(std::string s){
    int sum = 0;
    for(char c : s){
        if(std::isupper(c))
            sum += (int)c - 'A' + 1; 
    }
    return sum;
}