#include <string>

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c))
            sum += (int)c - 'A' + 1; // ASCII value of A is 65
    }
    return sum;
}