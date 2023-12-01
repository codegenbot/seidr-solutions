#include <cassert>

bool hasEvenDigit(int num){
    while(num > 0){
        int digit = num % 10;
        if(digit % 2 == 0){
            return true;
        }
        num = num / 10;
    }
    return false;
}

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for(int i=0; i<x.size(); i++){
        int num = x[i];
        if(!hasEvenDigit(num)){
            result.push_back(x[i]);
        }
    }
    return result;
}

int main(){
    assert(unique_digits({135, 103, 31}) == std::vector<int>({31, 135}));
    return 0;
}