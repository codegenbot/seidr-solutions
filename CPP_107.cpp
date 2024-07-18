#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<int> even_odd_palindrome(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> res(2, 0);
    for(int i = 1; i <= n; ++i){
        std::string s = std::to_string(i);
        std::string rev = s;
        std::reverse(rev.begin(), rev.end());
        if(s == rev){
            if(i % 2 == 0){
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}

int main(){
    assert(issame(even_odd_palindrome(1), std::vector<int>{0, 1}));
    return 0;
}