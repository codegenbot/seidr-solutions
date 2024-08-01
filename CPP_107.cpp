#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> even_odd_palindrome(const int& n);

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> even_odd_palindrome(const int& n){
    std::vector<int> palin;
    for(int i=1; i<=n; ++i){
        palin.push_back(i);
    }
    for(int i=n-1; i>0; --i){
        palin.push_back(i);
    }
    return palin;
}