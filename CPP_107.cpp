vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i=1; i<=n; i++){
        string s = to_string(i);
        bool isPalindrome = true;
        int left = 0;
        int right = s.length() - 1;
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