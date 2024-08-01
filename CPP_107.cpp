#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result;
    if (n % 2 == 0) {
        result.push_back(0);
    } else {
        result.push_back(1);
    }
    return result;
}