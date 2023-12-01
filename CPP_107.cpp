#include <vector>
#include <string>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
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
    // Test cases
    assert(issame(even_odd_palindrome(10), {9, 0}));
    assert(issame(even_odd_palindrome(100), {18, 0}));
    assert(issame(even_odd_palindrome(1000), {198, 0}));
    assert(issame(even_odd_palindrome(10000), {1998, 0}));
    
    return 0;
}