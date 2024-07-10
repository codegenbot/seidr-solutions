// Define a function is_palindrome that takes a string as input and returns a boolean
bool is_palindrome(const string& text) {
    int left = 0;
    int right = text.length() - 1;
    
    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}