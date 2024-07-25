#include <string>

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c))
            sum += (int)c - 55; // subtracting the ASCII value of 'A' to get the corresponding digit 
    }
    return sum;
}