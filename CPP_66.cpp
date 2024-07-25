#include <string>

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c))
            sum += (int)c - 55; // Convert uppercase letters to their corresponding digit values
    }
    return sum;
}