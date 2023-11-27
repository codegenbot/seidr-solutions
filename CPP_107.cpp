#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result(2, 0);
    for(int i=1; i<=n; i++){
        std::string s = std::to_string(i);
        bool isPalindrome = true;
        int left = 0;
        int right = s.length() - 1;
        while(left < right){
            if(s[left] != s[right]){
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }
        if(isPalindrome){
            if(i % 2 == 0){
                result[0]++;
            }else{
                result[1]++;
            }
        }
    }
    return result;
}

int main(){
    assert(issame(even_odd_palindrome(1), {0, 1}));
    assert(issame(even_odd_palindrome(5), {2, 3}));
    assert(issame(even_odd_palindrome(10), {4, 5}));
    assert(issame(even_odd_palindrome(100), {40, 60}));
    
    return 0;
}