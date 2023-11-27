vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i=1; i<=n; i++){
        string str = to_string(i);
        int len = str.length();
        bool isPalindrome = true;
        for(int j=0; j<len/2; j++){
            if(str[j] != str[len-j-1]){
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