#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> unique_digits(int n){
    std::vector<int> result;
    while (n != 0){
        int digit = n % 10;
        if (std::find(result.begin(), result.end(), digit) == result.end()){
            result.push_back(digit);
        }
        n /= 10;
    }
    return result;
}