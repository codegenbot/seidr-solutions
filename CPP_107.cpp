#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    
    for(int i = 1; i <= n; i++){
        string num = to_string(i);
        int len = num.length();
        
        bool isPalindrome = true;
        for(int j = 0; j < len/2; j++){
            if(num[j] != num[len-j-1]){
                isPalindrome = false;
                break;
            }
        }
        
        if(isPalindrome){
            if(i % 2 == 0){
                result[0]++;
            } else{
                result[1]++;
            }
        }
    }
    
    return result;
}

int main(){
    vector<int> expected_result = {0, 0};
    vector<int> result = even_odd_palindrome(100);
    
    assert(issame(expected_result, result));
    
    return 0;
}