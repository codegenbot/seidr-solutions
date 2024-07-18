#include <string>

int digitSum(std::string s){
    int sum = 0;
    for(char c : s){
        if(isupper(static_cast<unsigned char>(c))){
            sum += c;
        }
    }
    return sum;
}