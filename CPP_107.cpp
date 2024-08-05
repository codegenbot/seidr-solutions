#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

bool issame(std::vector<int> vec1, std::vector<int> vec2){
    return vec1 == vec2;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> count{0, 0};
    for(int i = 1; i <= n; ++i){
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if(num == rev_num){
            if(i % 2 == 0){
                count[0]++;
            } else {
                count[1]++;
            }
        }
    }
    return count;
}

int main(){
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}