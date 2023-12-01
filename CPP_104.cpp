#include <iostream>
#include <vector>
#include <algorithm>

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
    std::sort(result.begin(), result.end());
    return result;
}