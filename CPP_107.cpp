vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0); // initialize result vector with two elements, both set to 0

    for(int i=1; i<=n; i++){
        string num = to_string(i); // convert integer to string

        bool isPalindrome = true;
        int left = 0;
        int right = num.length() - 1;

        while(left < right){
            if(num[left] != num[right]){
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }

        if(isPalindrome){
            if(i % 2 == 0){
                result[0]++; // increment even palindrome count
            } else{
                result[1]++; // increment odd palindrome count
            }
        }
    }

    return result;
}