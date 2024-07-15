#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result(2, 0);
    for(int i=1; i<=n; ++i){
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if(issame(num, rev_num)){
            if(i % 2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> res = even_odd_palindrome(100);
    for(int i=0; i<res.size(); ++i){
        std::cout << res[i] << " ";
    }
    return 0;
}