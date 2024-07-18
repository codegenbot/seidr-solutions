#include <string>
#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result(2, 0);
    for(int i = 1; i <= n; ++i){
        std::string str = std::to_string(i);
        std::string rev = str;
        std::reverse(rev.begin(), rev.end());
        if(str == rev){
            if(i % 2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}