#include <string>

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c)){
            sum += (int)c - 55; 
        }
    }
    return sum;
}