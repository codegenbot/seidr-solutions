#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result;
    for (int i = 0; i <= n / 2; ++i) {
        result.push_back(i % 2);
    }
    
    if (n % 2 == 0) {
        for (int i = n / 2 - 1; i >= 0; --i) {
            result.push_back(i % 2);
        }
    } else {
        for (int i = n / 2; i >= 0; --i) {
            result.push_back(i % 2);
        }
    }
    
    return result;
}

int main(){
    int n;
    std::cin >> n;
    
    std::vector<int> result = even_odd_palindrome(n);
    
    assert(issame(result, {0, 1}));
    
    for(int i = 0; i < result.size(); ++i){
        std::cout << result[i] << " ";
    }
    
    return 0;
}