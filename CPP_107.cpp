#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> even_odd_palindrome(const int& n);

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_palindrome(const int& n){
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    for (int i = n; i >= 1; --i) {
        if (i % 2 != 0) {
            result.push_back(i);
        }
    }
    return result;
}