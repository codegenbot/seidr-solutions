#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::string& str){
    std::string rev_str = str;
    std::reverse(rev_str.begin(), rev_str.end());
    return str == rev_str;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> res(2, 0);
    for(int i = 1; i <= n; ++i){
        if(issame(std::to_string(i))){
            if(i % 2 == 0){
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}