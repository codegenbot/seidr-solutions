vector<int> even_odd_palindrome(int n){

    vector<int> result(2, 0); // Initialize the result vector with 0 for even and odd palindromes

    for (int i = 1; i <= n; i++) {
        string s = to_string(i); // Convert the integer to a string

        bool isPalindrome = true; // Initialize the palindrome flag as true

        // Check if the string is a palindrome (check each character from both ends)
        for (int j = 0; j < s.length() / 2; j++) {
            if (s[j] != s[s.length() - 1 - j]) {
                isPalindrome = false; // If characters are not equal, set the flag to false
                break;
            }
        }

        // Increment the count in the result vector based on the palindrome type
        if (isPalindrome) {
            if (i % 2 == 0) {
                result[0]++; // Even palindrome
            } else {
                result[1]++; // Odd palindrome
            }
        }
    }

    return result;
}