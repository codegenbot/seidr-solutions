#include <iostream>
#include <string>

using namespace std;

int digitSum(const string& s){
    int sum = 0;
    for(char c : s){
        if(isupper(c)){
            sum += c - '0';
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    
    return 0;
}