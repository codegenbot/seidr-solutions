#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b){
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
    std::vector<int> nums = {123, 456, 789, 246, 135};
    std::vector<int> uniqueNums = unique_digits(nums);
    for(int num : uniqueNums){
        std::cout << num << " ";
    }
    return 0;
}