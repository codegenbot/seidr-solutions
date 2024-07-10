#include <vector>
#include <iostream>

bool issame(int num){
    std::string str_num = std::to_string(num);
    std::string rev_str_num = str_num;
    std::reverse(rev_str_num.begin(), rev_str_num.end());
    return str_num == rev_str_num;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result(2, 0);
    for(int i=1; i<=n; ++i){
        if(issame(i)){
            if(i % 2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main(){
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::vector<int> result = even_odd_palindrome(n);
    std::cout << "Count of even palindromes: " << result[0] << std::endl;
    std::cout << "Count of odd palindromes: " << result[1] << std::endl;
    return 0;
}