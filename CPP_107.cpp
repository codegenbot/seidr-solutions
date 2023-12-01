vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        int left = 0, right = s.length() - 1;
        bool isPalindrome = true;
        while(left < right){
            if(s[left] != s[right]){
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }
        if(isPalindrome){
            if(i % 2 == 0){
                result[0]++;
            }else{
                result[1]++;
            }
        }
    }
    return result;
}