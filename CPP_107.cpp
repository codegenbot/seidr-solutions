#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> even_odd_palindrome(int n) {
    int count_even = 0, count_odd = 0;
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 0 && isPalindrome(std::to_string(i))){
            count_even++;
        } else if(i % 2 != 0 && isPalindrome(std::to_string(i))){
            count_odd++;
        }
    }
    return {count_even, count_odd};
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::vector<int> result = even_odd_palindrome(n);

    std::cout << "Number of even palindromes: " << result[0] << std::endl;
    std::cout << "Number of odd palindromes: " << result[1] << std::endl;
}

bool isPalindrome(std::string s) {
    int left = 0, right = s.size() - 1;
    while(left < right){
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}