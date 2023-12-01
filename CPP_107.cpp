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
    // Test the code using assert function
    vector<int> expected = {4, 5};
    vector<int> output = even_odd_palindrome(10);
    assert(issame(expected, output));

    expected = {9, 9};
    output = even_odd_palindrome(20);
    assert(issame(expected, output));

    expected = {15, 18};
    output = even_odd_palindrome(30);
    assert(issame(expected, output));

    return 0;
}