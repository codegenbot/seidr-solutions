#include <iostream>
#include <string>
#include <cassert>

int digitSum(const std::string& s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])){
            sum += static_cast<int>(s[i]);
        }
    }
    return sum;
}

int main(){
    int result = digitSum("You arE Very Smart");
    std::cout << result << std::endl;
    
    return 0;
}