vector<int> even_odd_palindrome(int n){
    vector<int> result(2,0); // initialize the result vector with 2 zeros
    for(int i=1;i<=n;i++){
        string s = to_string(i); // convert the integer i to string for checking palindrome
        int left =0;
        int right = s.length()-1;
        bool isPalindrome = true;
        while(left<=right){
            if(s[left]!=s[right]){
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }
        if(isPalindrome){
            if(i%2==0){
                result[0]++; // increment the number of even palindromes
            }
            else{
                result[1]++; // increment the number of odd palindromes
            }
        }
    }
    return result;
}