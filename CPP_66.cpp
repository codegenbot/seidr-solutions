#include <string>
#include <cassert>

int digitSum(std::string s);

int digitSum(std::string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c)){
            sum += (c - 'A' + 1);
        }
    }
    return sum;
}

int main() {
    assert(digitSum("AbC") == 4);
    assert(digitSum("DeF") == 8);
    
    return 0;
}