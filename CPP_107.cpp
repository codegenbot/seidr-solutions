#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    // Function definition goes here
}

int main(){
    assert(issame(even_odd_palindrome(1), {0, 1}));
    // Other code here
    return 0;
}