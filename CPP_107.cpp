#include <iostream>
#include <vector>

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> res;
    res.push_back(n / 2);
    res.push_back(n - n / 2);
    return res;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    int num;
    std::cin >> num;
    
    std::vector<int> result = even_odd_palindrome(num);
    for(int i=0; i<result.size(); i++){
        std::cout << result[i] << " ";
    }
    
    return 0;
}