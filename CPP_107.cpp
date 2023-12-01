vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0); // initialize the result vector with 2 elements, both set to 0

    for(int i = 1; i <= n; i++){
        string num = to_string(i); // convert the integer to string
        int len = num.length(); // get the length of the string

        bool isPalindrome = true; // flag to check if the number is palindrome

        for(int j = 0; j < len/2; j++){
            if(num[j] != num[len-j-1]){ // compare the characters from both ends
                isPalindrome = false; // if any characters don't match, set the flag to false
                break;
            }
        }

        if(isPalindrome){
            if(i % 2 == 0){
                result[0]++; // increment the count of even palindromes
            } else {
                result[1]++; // increment the count of odd palindromes
            }
        }
    }

    return result;
}