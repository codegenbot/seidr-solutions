#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> palindrome;
    for (int i = 0; i < n; ++i) {
        palindrome.push_back(i % 2);
    }
    return palindrome;
}

int main(){
    assert(issame(even_odd_palindrome(1), std::vector<int>{0, 1}));
    
    return 0;
}