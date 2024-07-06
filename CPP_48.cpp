Here is the solution:

bool is_palindrome(string text){
    string str = text;
    int left = 0, right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right]) 
            return false; 
        left++; right--;
    }
    return true;
}