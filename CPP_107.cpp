#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result(2, 0);
    for(int i = 1; i <= n; ++i){
        std::string s = std::to_string(i);
        std::string rev_s = s;
        std::reverse(rev_s.begin(), rev_s.end());
        if(s == rev_s){
            if(i % 2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> expected_result = {0, 1};
    assert(issame(even_odd_palindrome(1), expected_result));
    
    return 0;
}