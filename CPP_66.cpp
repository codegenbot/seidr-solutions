#include <iostream>
#include <string>
using namespace std;

int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(c >= 'A' && c <= 'Z'){
            sum += c;
        }
    }
    return sum;
}

int main(){
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}