#include <vector>
#include <algorithm>
#include <cassert>

bool hasEvenDigit(int num){
    while(num > 0){
        if(num % 10 % 2 == 0){
            return true;
        }
        num /= 10;
    }
    return false;
}

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for(int num : x){
        if(!hasEvenDigit(num)){
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main(){
    assert(unique_digits({135, 103, 31}) == std::vector<int>({31, 135}));
    return 0;
}