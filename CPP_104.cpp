#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame_digits(std::vector<int> a, std::vector<int> b){
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            if(temp % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main(){
    std::vector<int> input = {123, 456, 789};
    std::vector<int> output = unique_digits(input);
    for(int num : output){
        std::cout << num << " ";
    }
    
    assert(issame_digits(unique_digits({135, 103, 31}), {31, 135}));

    return 0;
}