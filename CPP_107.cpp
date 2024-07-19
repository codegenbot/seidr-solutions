#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> res;
    res.push_back(n / 2);
    res.push_back(n - n / 2);
    return res;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> result = even_odd_palindrome(n);
    
    std::vector<int> expected = {n / 2, n - n / 2};
    
    if (issame(result, expected)) {
        std::cout << "Result and Expected are the SAME" << std::endl;
    } else {
        std::cout << "Result and Expected are NOT the same" << std::endl;
    }
    
    return 0;
}