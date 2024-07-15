#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> res(2, 0);
    for(int i=1; i<=n; ++i){
        std::string s = std::to_string(i);
        std::string rev_s = s;
        std::reverse(rev_s.begin(), rev_s.end());
        if(s == rev_s){
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
    assert(issame(even_odd_palindrome(1), {0, 1}));
    
    return 0;
}