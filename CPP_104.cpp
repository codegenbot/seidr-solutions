#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for(int i=0; i<x.size(); i++){
        int num = x[i];
        bool hasEvenDigit = false;
        while(num > 0){
            int digit = num % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            num = num / 10;
        }
        if(!hasEvenDigit){
            result.push_back(x[i]);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert (std::unique_digits({135, 103, 31}) == std::vector<int>({31, 135}));
    return 0;
}