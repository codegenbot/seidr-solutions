#include <vector>
#include <string>

bool issame(vector<int> a, vector<int> b){
    // code here
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

int main() {
    // Test the even_odd_palindrome function
    vector<int> result = even_odd_palindrome(10);
    assert(result[0] == 2);
    assert(result[1] == 3);

    result = even_odd_palindrome(100);
    assert(result[0] == 18);
    assert(result[1] == 81);

    result = even_odd_palindrome(1000);
    assert(result[0] == 198);
    assert(result[1] == 801);

    return 0;
}