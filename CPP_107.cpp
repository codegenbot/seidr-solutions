#include <vector>

bool issame(const std::vector<int>& A, const std::vector<int>& B) {
    return A == B;
}

std::vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for(int i = 1; i <= n; ++i){
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if(num == rev_num){
            if(i % 2 == 0){
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}