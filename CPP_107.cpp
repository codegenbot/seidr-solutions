#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> even_odd_palindrome(int n){
    vector<int> res;
    res.push_back(n / 2);
    res.push_back(n - n / 2);
    return res;
}

int main(){
    int num;
    std::cin >> num;
    
    vector<int> result = even_odd_palindrome(num);
    
    for(int i = 0; i < result.size(); i++){
        std::cout << result[i] << " ";
    }
    
    return 0;
}