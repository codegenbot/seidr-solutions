#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::string& str){
    return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> res(2, 0);
    for(int i = 1; i <= n; ++i){
        std::string str = std::to_string(i);
        if(issame(str)){
            if(i % 2 == 0){
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}