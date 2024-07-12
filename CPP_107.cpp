#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<int> even_odd_palindrome(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result = {0, 0};
    for(int i = 1; i <= n; ++i){
        std::string s = std::to_string(i);
        std::string rev = s;
        std::reverse(rev.begin(), rev.end());
        if(s == rev){
            if(i % 2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main(){
    // Test the even_odd_palindrome function
    std::vector<int> test_result = even_odd_palindrome(20);
    assert(issame(test_result, {9, 11}));
    
    return 0;
}