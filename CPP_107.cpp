#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    if(n % 2 == 0){
        return {0, 1};
    } else {
        return {1};
    }
}

int main(){
    int n;
    std::cin >> n;
    
    std::vector<int> result = even_odd_palindrome(n);
    
    assert(issame(result, {0, 1})); // checking if result is {0, 1}
    
    for(int i = 0; i < result.size(); ++i){
        std::cout << result[i] << " "; // output the elements of result
    }
    
    return 0;
}