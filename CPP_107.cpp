#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_palindrome(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implementation of issame function
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        bool isPalindrome = true;
        for (int j = 0; j < num.size() / 2; ++j) {
            if (num[j] != num[num.size() - 1 - j]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}